#include <stdio.h>

void check(int transaction, int *currentlim ){

    if(transaction <= *currentlim) {*currentlim -= transaction; printf("Transaction ACCEPTED, remaining limit is $%d \n", *currentlim);}

   else if(transaction > *currentlim) {printf("Transaction limit reached, DECLINED \n");}
   
}

int main(void){

   int dailylim = 5000;
   int currentlim;
   
   int transaction;
    
   printf("Enter your current daily limit \n");
   scanf("%d", &currentlim);

   printf("Enter your amount for transaction \n");
   scanf("%d", &transaction);

   check(transaction,&currentlim);

   return 0;
}



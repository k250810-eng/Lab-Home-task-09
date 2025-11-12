#include <stdio.h>

int main(){

    int var1= 100;
    int *ptr1= &var1;
    
    int var2= 200;
    int *ptr2 =&var2;
    
    int var3= 300;
    int *ptr3 = &var3;


    ptr1 = &var2;
    ptr2 = &var3;
    ptr3 = &var1;
    
    *ptr1+=30;
    *ptr2-=50;
    *ptr3/=20;

    printf("Var 1 (originally 100): %d \n", var1);
    printf("Var 2 (originally 200): %d \n", var2);
    printf("Var 3 (originally 300): %d \n", var3); 

    return 0;
}
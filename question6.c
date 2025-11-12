#include <stdio.h>

float money(float *income){

    float tax_amount;

    if( *income >= 0 && *income <=  20000){
       tax_amount = 0;
    }
    else if( *income >20000 && *income <= 50000){
       tax_amount = (*income-20000) * 0.10;
    }
    else if(*income > 50000){
        tax_amount = 3000 + ((*income-50000) * 0.20);
    }

*income =  *income - tax_amount;

return tax_amount;
}

int main(){

    float income;
    float tax;

    printf("Enter the gross income that you have \n $");
    scanf("%f", &income);

    while(income<0){
        printf("Income cannot be negative ( get a loan ) \n $");
        scanf("%f", &income);
    }

     tax = money(&income);
 
printf("Tax $%.2f and income $%.2f",tax, income);

return 0;
}
#include <stdio.h>

float bill(int people,float cost){

    float total_tax = 0.0;
    float total_tip = 0.0;
    float total_service = 0.0;
    float total = 0.0;

    total_tax = cost * 0.08;
    
    if(cost>50){
        total_tip = cost * 0.15;
    }

    else{
        total_tip = cost * 0.10;
    }

    if(people>6){
        total_service = cost * 0.05;
    }
total =  total_service + total_tax + total_tip + cost;

return total;
}

int main(){

    float cost;
    int people;
    float total = 0;

    printf(" Enter the Cost of the dishes \n ");
    scanf("%f",&cost);
    printf("Enter the number of people that ate the dishes \n");
    scanf("%d", &people);

    total = bill(people,cost);

    printf("the total bill comes to %.2f \n", total);

  return 0;  
}
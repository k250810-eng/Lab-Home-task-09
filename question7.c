#include <stdio.h>


float rental( int days, float kilometres){
  float base_price = 40 * days;
  float allowed_mileage = days * 100;
  float extra_cost = 0;
  float total;
  float discount = 0;
 
  if(kilometres> allowed_mileage){
    float extra_mileage =  kilometres - allowed_mileage; 
    extra_cost  =  extra_mileage * 0.25;
  }

  total =  base_price + extra_cost;

 if(days>=7){
    discount = total * 0.10;
    total = total - discount;
 }

 return total;
}


int main(){

    int days;
    float kilo;
    float total;

    printf("Enter Days of renting the car \n");
    scanf("%d", &days);

    printf("Enter Kilometres of the Car Driven \n");
    scanf("%f",&kilo);

    total = rental(days,kilo);


    printf("Total Rental Cost: %.2f\n", total);

}
#include <stdio.h>

float calc(float amount, float weight){

float shippingtotal;

if(amount>100)
{
    shippingtotal = 0;
}

else{

    if(weight >=2 && weight <= 5)
    {
      shippingtotal = 15;
    }
    else if(weight < 2)
    {
      shippingtotal = 10;
    }
    else if(weight > 5)
    {
      shippingtotal = 20;
    }
}

return shippingtotal;
}



int main(){

 float amount;
 int choice = 1;
 float weight;
 float total = 0;
 float cumultotal = 0;

 while(choice!=0){
    
  printf("Enter 0 to exit and show the Cumulative total (anything else to continue) \n");
  scanf("%d",&choice);

  if (choice==0){break;}

  printf("Enter The price of package \n");
  scanf("%f",&amount); 
  printf("Enter the Weight of the package \n");
  scanf("%f",&weight);

  total = amount + calc(amount,weight); 
  cumultotal += total;
 }

printf("The total is %.2f",cumultotal);


return 0;
}
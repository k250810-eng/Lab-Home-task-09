#include <stdio.h>


void checker(float Temperature)
{
   if(Temperature>35){printf("HEAT ALERT\n");}
   else if(Temperature<10){printf("Cold Alert\n");}
   else if(Temperature>=15 && Temperature<=25){printf("COMFORT ZONE\n");}
   else {printf("NORMAL CONDITIONS\n");}
}


int main(){

  float temperature;
  
  printf("Enter the temperature in Celcius \n");
  scanf("%f", &temperature);

  checker(temperature);



return 0;
}
#include <stdio.h>

float avg(int total, int subjects){

  float average = (float)total/subjects;
  return average;
}

int main(){

    int subjects = 3;
    int marks[3];
    int total = 0;
    float average;

   for(int i=0; i<subjects ; i++){
      printf("Enter Marks for subject %d from 0-100 \n",i+1);
      scanf("%d", &marks[i]);
        
        if(marks[i]<0 || marks[i]>100){printf("invalid Marks Entered\n"); i--;}    
    
        else{total += marks[i];}
}

 average = avg(total,subjects);

printf("The average of the 3 subjects marks is Value is %.2f \n", average);

if (average >= 50){ printf("You Have Passed \n");}
else if (average <50){ printf("You Have Failed \n");}

return 0;
}
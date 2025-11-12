#include <stdio.h>

int main(){


int grid[3][4] = { {1,2,3,4},
                   {5,6,7,8},
                   {9,10,11,12} };

int *ptr = &grid[0][0];

int *ptr2 = &grid[2][0];

int *ptr3 = &grid[0][3];

printf("\n");
printf("-----\n");
printf("\n");

    for(int i=0; i<12; i++){
        printf("Elements from incrementing %d: %d\n", i, *(ptr + i));
    }

printf("\n");
printf("-----\n");
printf("\n");

   for(int i = 4; i>0; i--){
       printf("Elements from decrementing %d: %d\n", i-1, *(ptr2 + i -1));
   }

printf("\n");
printf("-----\n");
printf("\n");   

printf("Elements that are divisible by 3:\n");
   for (int i = 0; i < 12; i++) {
    if (*(ptr + i) % 3 == 0) {
        printf("%d ", *(ptr + i));
    }
}
    printf("\n");


printf("\n");
printf("-----\n");
printf("\n");

printf("Last element using 2D pointer notation: %d\n", *(*(grid + 2) + 3));

printf("\n");
printf("-----\n");
printf("\n");

  return 0;  
}
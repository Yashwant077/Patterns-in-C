#include <stdio.h>

int main() {
   int rows, i, j,number=1;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   
   for (i = 0; i < rows; i++) 
   {
      for (j = 0; j <= i; j++) 
      {
         printf("%d ", number);
         number=number+1;
      }
      printf("\n");
   }
   return 0;
}

/*
Output::
Enter the number of rows: 4
1 
2 3 
4 5 6 
7 8 9 10
*/

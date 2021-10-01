#include<stdio.h>    
int main(){    
   int order;
   printf("Order of Square you want to Draw:: ");
   scanf("%d",&order);
   
   for(int i=0; i<order; i++)
   {
       for(int j=0; j<order; j++)
       {
           if(i==0 || j==0 || i==order-1 || j==order-1)
           {
               printf("*");
           }
           else
           {
               printf(" ");
           }
       }
       printf("\n");
   }
   
   return 0;
}

/*
Output::
Order of Square you want to Draw:: 5
*****
*   *
*   *
*   *
*****
*/

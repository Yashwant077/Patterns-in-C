#include <stdio.h>

int main()
{
    int n,i,j,k=0;
    printf("Enter no. of rows: ");
    scanf("%d", &n);
   
   for(i=1; i<=n; i++,k=0)
   {
       for(j=1; j<=n-i; j++)
       {
           printf("  ");
       }
       while(k!=2*i-1)
       {
           printf("* ");
           k++;
       }
       printf("\n");
   }
    return 0;
}

/*
Output::
Enter no. of rows: 5
        * 
      * * * 
    * * * * * 
  * * * * * * * 
* * * * * * * * * 
*/

/*
Explanation::
row = 5
i=1,space=1 to 5-1=4, k=2-1=1
i=2,space=1 to 5-2=3, k=4-1=3
i=3,space=1 to 5-3=2, k=6-1=5
i=4,space=1 to 5-4=1, k=8-1=7
i=5,space=1 to 5-5=0, k=10-1=9
*/

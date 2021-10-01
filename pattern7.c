#include <stdio.h>

int main()
{
    int n,i,j,k;
    printf("Enter no. of rows: ");
    scanf("%d", &n);
    
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=n-i;j++)
        {
            printf("  ");
        }
        for(k=i;k<=2*i-1;k++)
        {
            printf("* ");
        }
        for(k=0;k<i-1;k++)
        {
            printf("* ");
        }
    printf("\n");
    }
    i=j=k=0;
    for(i=1;i<=n;i++,k=0)
    {
        for(j=1;j<=n-i;j++)
        {
            printf("  ");
        }
        for(k=0;k<2*i-1;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

/*
Output::
Enter no. of rows: 5
* * * * * * * * * 
  * * * * * * * 
    * * * * * 
      * * * 
        * 
        * 
      * * * 
    * * * * * 
  * * * * * * * 
* * * * * * * * * 

Code Explanation::
rows=3
i=3,space=0(row-i),j=(3,4,5), j=(0,1,2)
i=2,space=1(row-i),j=(2,3),   j=(0,1)
i=1,space=2(row-i),j=(1),     j=0
*/

#include <stdio.h>

int main()
{
    int n,i,j,k,l;
    printf("Enter the no. of rows: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    for(k=n;k>0;k--)
    {
        for(l=1;l<=k;l++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

/*
output::
Enter the no. of rows: 9
* 
* * 
* * * 
* * * * 
* * * * * 
* * * * * * 
* * * * * * * 
* * * * * * * * 
* * * * * * * * * 
* * * * * * * * * 
* * * * * * * * 
* * * * * * * 
* * * * * * 
* * * * * 
* * * * 
* * * 
* * 
* 
*/

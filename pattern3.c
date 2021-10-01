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
            printf("%d ",i);
        }
        printf("\n");
    }
    
    for(k=n-1;k>0;k--)
    {
        for(l=1;l<=k;l++)
        {
            printf("%d ",k);
        }
        printf("\n");
    }

    return 0;
}

/*
Output::
Enter the no. of rows: 5
1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 
4 4 4 4 
3 3 3 
2 2 
1 
*/

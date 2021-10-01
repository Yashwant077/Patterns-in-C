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
            printf("%d ",j);
        }
        printf("\n");
    }
    
    for(k=n;k>0;k--)
    {
        for(l=1;l<=k;l++)
        {
            printf("%d ",l);
        }
        printf("\n");
    }

    return 0;
}

/*
Output::
Enter the no. of rows: 7
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
1 2 3 4 5 6 
1 2 3 4 5 6 7 
1 2 3 4 5 6 7 
1 2 3 4 5 6 
1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1 
*/

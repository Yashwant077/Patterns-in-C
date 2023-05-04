#include <stdio.h>

int main()
{
    int n,i,j;
    char alpha;
    
    printf("Enter an alphabet: ");
    scanf("%c", &alpha);
    
    for(i='A';i<=alpha;i++)
    {
        for(j='A';j<=i;j++)
        {
            printf("%c ",i);
        }
        printf("\n");
    }
    return 0;
}

/*
Output::
Enter an alphabet: F
A 
B B 
C C C 
D D D D 
E E E E E 
F F F F F F 
*/

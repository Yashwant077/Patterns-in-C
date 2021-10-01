#include <stdio.h>

int main()
{
    int n,i,j,k=0,count=0,count1=0;
    printf("Enter no. of rows: ");
    scanf("%d", &n);
   
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf("  ");
        }
        
        while(k!=(2*i)-1)
        {
            if(count<=i-1)
            {
                printf("%d ",i+k);
                count++;
            }
            else
            {
                count1++;
                printf("%d ", i+k-(2*count1));
            }
            k++;
        }
        
        count=count1=k=0;
        printf("\n");
    }
    
    return 0;
}


/*
Output::
Enter no. of rows: 5
        1 
      2 3 2 
    3 4 5 4 3 
  4 5 6 7 6 5 4 
5 6 7 8 9 8 7 6 5 
*/

/*
Code Explanation::
row=5                     count<=i-1
i=1,space=1 to 4(5-i),k=0,count=0,count1=0

i=2,space=1 to 3(5-i),k=0,count=0<=1,count1=0   print 2
                      k=1,count=1<=1,count1=0,  print 3
                      k=2,count=2>1 ,count1=1,  print 2

i=3,space=1 to 2(5-i),k=0,count=0<=2,count1=0,  print 3
                      k=1,count=1<=2,count1=0,  print 4
                      k=2,count=2<=2,count1=0,  print 5
                      k=3,count=3>2, count1=1,  print 4
                      k=4,count=4>2, count1=2,  print 3

i=4,space=1 to 1(5-i),k=0,count=0<=3,count1=0,  print 4
		      k=1,count=1<=3,count1=0,  print 5
                      k=2,count=2<=3,count1=0,  print 6
                      k=3,count=3<=3,count1=0,  print 7
	              k=4,count=4>3, count1=1,  print 6
                      k=5,count=4>3, count1=2,  print 5
                      k=6,count=4>3, count1=3,  print 4
*/

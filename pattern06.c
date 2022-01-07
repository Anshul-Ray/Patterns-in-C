/*
Pattern -
    *
   * *
  * * *
 * * * *
* * * * *

Water Pattern 
* * * * *
 * * * *
  * * *
   * *
    * 
*/
#include<stdio.h>
#include<stdbool.h>

int main()
{
    system("CLS");
    int i,j,n;
    bool k=true;
    printf("Enter no. of rows :"); scanf("%d",&n);
    for(i=0; i<n ; i++)
    {
        for(j=0; j<=(2*n-1) ; j++)
        {
            if(j>=n-i&&j<=n+i&&k)
            {
                printf("*");
                k=false;
            }
            else
            {
                printf(" ");
                k=true;
            }
        }
        printf("\n");
    }
    
    for(i=n-1 ; i>=0 ; i--)
    {
        for(j=0 ; j<=(2*n+1) ; j++)
        {
            if(j>=n-i && j<=n+i && k)
            {
                printf("*");
                k=false;
            }
            else
            {
                printf(" ");
                k=true;
            }
        }
        printf("\n");
    }
    return 0;
}

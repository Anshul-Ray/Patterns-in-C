/*
Pattern -
 *  *  *  *  *  *  *  *  *  *  *  *  *
 *                                   *
 *                                   *
 *        *  *  *  *  *  *  *        *
 *        *                 *        *
 *        *                 *        * 
 *        *                 *        * 
 *        *                 *        * 
 *        *                 *        * 
 *        *  *  *  *  *  *  *        * 
 *                                   * 
 *                                   * 
 *  *  *  *  *  *  *  *  *  *  *  *  * 
*/
#include<stdio.h>
int main()
{
    system("CLS");	
    int i,j,m,n;
    printf("Enter no. of rows :"); scanf("%d",&n);
    m=n/2;
    for(i=0 ; i<2*n+1 ; i++)
    {
        for(j=0 ; j<2*n+1 ; j++)
        {
            if((i==0 || i==2*n) || (j==0 || j==2*n))
            printf(" * ");
            else if((i>=n-m && i<=n+m )&&(j>=n-m && j<=n+m))
            {
                if(i==n-m || i==n+m )
                printf(" * ");
                else if(j==n-m || j==n+m)
                printf(" * ");
                else
                printf("   ");
            }
            else
            printf("   ");
        }
        printf("\n");
    }
    return 0;
}

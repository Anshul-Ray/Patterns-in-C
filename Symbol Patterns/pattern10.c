/*
Pattern -
*
**
***
****
*****
****
***
**
*

Mirror Pattern -

    * 
   **
  ***
 ****
*****
 ****
  ***
   **
    *
*/
#include<stdio.h>
int main()
{
    system("CLS");   
    int i, j, n;
    printf("Enter no. of rows:"); scanf("%d",&n);
    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<=i ; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=1 ; i<n ; i++)
    {
        for(j=0 ; j<n-i ; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n ; j++)
        {
            if(j<(n-1)-i)
            printf(" ");
            else
            printf("*");
        }
        printf("\n");
    }
    for(i=1 ; i<n ; i++)
    {
        for(j=n-1; j>=0; j--)
        {   
            if(j<n-i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
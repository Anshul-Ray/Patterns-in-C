/*
Pattern -
*********
**** ****
***   ***
**     **
*       *
*/
#include<stdio.h>
int main()
{
    int i,j,n;
    system("CLS");
    printf("Enter no. of rows :"); scanf("%d",&n);
    for(i=0 ; i<n ; i++)
    {
        for(j=1 ; j<=2*n-1 ; j++)
        {
            if(j>n-i && j<n+i)
            printf(" ");
            else
            printf("*"); 
        }
        printf("\n");
    }
    return 0;
}

/*
Pattern -
     ******
    ****** 
   ******  
  ******   
 ******    
*/
#include<stdio.h>
int main()
{
    system("CLS");
    int i,j,n;
    printf("Enter no. of rows :"); scanf("%d",&n);
    for(i=0 ; i<n ; i++)
    {
        for(j=0; j<=2*n ; j++)
        {
            if(j>=n-i && j<=2*n-i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
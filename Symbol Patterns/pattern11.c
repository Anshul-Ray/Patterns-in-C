/*
Pattern -
//          \*****/
//          *\***/*
//          **\*/**
//          ***\***
//          **/*\**
//          */***\*
//          /*****\
*/
#include<stdio.h>

int main()
{   
    system("CLS");
    int i,j,n;
    printf("Enter no. of rows"); scanf("%d",&n);
    for(i=1; i<=n ; i++)
    {
        for(j=1; j<=n ; j++)
        {
            if(i==j)
            {
                printf("\\");
            }
            else if(i+j==n+1)
            {
                printf("/");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    reuturn 0;	
}
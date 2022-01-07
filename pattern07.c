/*
Pattern -
    *
   * *
  * * *
 * * * *
* * * * *

Using a single loop!
* * * * *
 * * * *
  * * *
   * *
    * 
Water pattern also made!
*/
#include<stdio.h>
#include<stdbool.h>

int main()
{
    int i,k,n;
    system("CLS");
    printf("Enter no. of rows :"); scanf("%d",&n);
    bool check=true;
    for(i=1,k=0;i<(2*n);i++)
    {
        if(k>n-1)
        break;
        if(i<n-k)
        {
            printf(" ");
        }
        else if(i<=n+k && check)
        {
            check = !check;
            printf("*");
        }
        else
        {
            check = !check;
            printf(" ");
        }

        if(i==n+k)
        {
            k++;
            check = true;
            printf("\n");
            i=0;
        }
    }
    //Water image
    for(i=0;i<n;i++)
    printf("_ "); 
    printf("\n\n");
    for(i=1 , k=n-1 ; i<2*n ; i++)
    {
        if(k<0)
        break;
        if(i<n-k)
        {
            printf(" ");
        }
        else if(i<=n+k && check)
        {
            check = !check;
            printf("*");
        }
        else
        {
            check = !check;
            printf(" ");
        }

        if(i==n+k)
        {
            k--;
            check = true;
            printf("\n");
            i=0;
        }
    }
    return 0;
}

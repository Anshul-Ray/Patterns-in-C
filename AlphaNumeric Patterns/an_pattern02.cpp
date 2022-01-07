#include<iostream>
using namespace std;
/*
Pattern -
    1
   121
  12321
 1234321
123454321
*/
// Code -
int main()
{
    int i,j,n,k=0;
    cout<<"Enter rows :";cin>>n;
    for(i=0 ; i<n ; i++)
    {
        k=0;
        for(j=0 ; j<=(2*n-1) ; j++)
        {
            if(j>=n-i && j<=n+i)
            {
                if(j<=n)
                k++;
                else
                k--;
                cout<<k;
            }
            else
            cout<<" "; 
        }
        cout<<"\n";
    }
    return 0;
}
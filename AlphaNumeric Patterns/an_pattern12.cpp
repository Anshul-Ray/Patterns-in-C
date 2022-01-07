#include<iostream>
using namespace std;
/*
Pattern - 
   1
  212
 32123
4321234
*/
// Code -
int main()
{
    system("CLS");
    int i,j,n,k=1;
    cout<<"Enter rows :"; cin>>n;
    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<=(2*n-1) ; j++)
        {
            if(j>=n-i && j<=n+i)
            {
                cout<<k;
                if(j<n)
                k--;
                else
                k++;
                
            }
            else
            cout<<" "; 
        }
        cout<<"\n";
    }    
    return 0;
}
#include<iostream>
using namespace std;
/*
Pattern -
    1
   12
  123
 1234
12345
 1234
  123
   12
    1
*/
// Code -
int main()
{
    system("CLS");
    int i, j, k, n;
    cout<<"Enter rows :"; cin>>n;
    for(i=0 ; i<n ; i++)
    {
        k=1;
        for(j=0 ; j<=n ; j++)
        {
            if(j<n-i)
            cout<<" ";
            else
            {
                cout<<k;
                k++;
            }
        }
        cout<<"\n";
    }
for(i=2 ; i<=n ; i++)
    {
        k=1;
        for(j=n ; j>=0 ; j--)
        {
            if(j<=n-i)
            {
                cout<<k;
                k++;
            }
            else
            cout<<" ";
        }
        cout<<"\n";
    }
}

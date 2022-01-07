#include<iostream>
using namespace std;
/*
Pattern -
    1
   232
  34543
 4567654
567898765
*/
// Code -
int main()
{
    system("CLS");
    int i,j,n,k=0;
    cout<<"Enter rows :"; cin>>n;
    for(i=0 ; i<n ; i++)
    {
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

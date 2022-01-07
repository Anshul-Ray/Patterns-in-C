#include<iostream>
using namespace std;
/*
Pattern -
   1
  A B
 1 2 3
A B C D
*/
// Code -
int main()
{
    system("CLS");
    int i,j,k,m,n;
    cout<<"Enter rows :"; cin>>n;
    char c;
    for(i=0; i<n ; i++)
    {
        m=1, c='A';
        for(j=0; j<=(2*n-1) ; j++)
        {
            if(j>=n-i&&j<=n+i&&k)
            {
                if(i%2==0)
                {
                    cout<<m;
                    m++;
                }
                else
                {
                    cout<<c;
                    c++;
                }
                k=0;
            }
            else
            {
                cout<<" ";
                k=1;
            }
        }
        cout<<"\n";
    }
    return 0;
}
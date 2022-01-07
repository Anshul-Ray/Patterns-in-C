#include<iostream>
using namespace std;
/*
Pattern -
1
10
101
1010
10101
101010
*/
// Code -
int main()
{
    system("CLS");
    int i,j,k,n;
    cout<<"Enter rows :"; cin>>n;
    for(i=0; i<n ; i++)
    {
        k=1;
        for(j=0;j<=i;j++)
        {
            cout<<k;
            k=!k;
        }
        cout<<"\n";
    }
}

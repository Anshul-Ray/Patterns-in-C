#include<iostream>
using namespace std;
/*
Pattern -
6543210
543210
43210
3210
210
10
0
*/
// Code -
int main()
{
    system("CLS");
    int i, j, n;
    cout<<"Enter rows :"; cin>>n;
    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n-i ; j++)
        {
            cout<<(n-1)-i-j;
        }
        cout<<"\n";
    }
    return 0;
}

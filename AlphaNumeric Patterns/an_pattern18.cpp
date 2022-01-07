#include <iostream>
using namespace std;
/*
Pattern - 
0
0 1
0 2 4
0 3 6 9
0 4 8 12 16
*/
// Code -
int main()
{
    system("CLS");
    int i,j,n;
    cout<<"Enter rows :"; cin>>n;
    for(i=0; i<n; i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<" "<<j*i<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

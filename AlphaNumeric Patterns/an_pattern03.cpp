#include<iostream>
using namespace std;
/*
Pattern -
ABCDCBA
ABC CBA
AB   BA
A     A
*/
// Code -
int main()
{
    system("CLS");
    int i,j,n;
    cout<<"Enter rows :";cin>>n;
    char c;
    for(i=0 ; i<n ; i++)
    {
        c='A';
        for(j=1 ; j<=2*n-1 ; j++)
        {
            if(j<=n-i || j>=n+i)
                cout<<c;         
            else
                cout<<" ";
            if(j<n)
                c++;
            else
                c--;
        }
        cout<<"\n";
    }
    return 0;
}


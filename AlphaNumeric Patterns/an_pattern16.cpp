#include<iostream>
using namespace std;
/*
Pattern -
ABCDEFG
ABC EFG
AB   FG
A     G
*/ 
// Code -
int main()
{
    system("CLS");
    int i,j,n;
    cout<<"Enter rows :"; cin>>n;
    char c;
    for(i=0 ; i<n ; i++)
    {
        c='A';
        for(j=1 ; j<=2*n-1 ; j++)
        {
            if(j>n-i && j<n+i)
            cout<<" ";
            else
            cout<<c; 
            c++;
        }
        cout<<"\n";
    }
    return 0;
}


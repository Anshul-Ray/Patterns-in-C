#include<iostream>
using namespace std;
/*
Pattern - 
A
BA
CBA
DCBA
*/
// Code -
int main()
{
    system("CLS");
    int i,j,n;
    cout<<"Enter rows :";cin>>n;
    char c='A',ch;
    for(i=0; i<n; i++)
    {
        ch=c;
        for(j=0; j<=i ; j++)
        {
            cout<<ch;
            ch--;
        }
        c++;
        cout<<"\n";
    }
    return 0;
}
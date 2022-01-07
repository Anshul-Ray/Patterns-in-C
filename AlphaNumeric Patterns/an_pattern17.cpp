#include<iostream>
using namespace std;
/*
Pattern -
1
62
1073
131184
15141295
*/
// Code -
int main()
{   
    system("CLS");
    int i,j,n,p,m=1,f;
    cout<<"Enter rows :"; cin>>n;
    for(i=0; i<n; i++)
    {
        f=n-i;p=m;
        for(j=0 ; j<=i ; j++)
        {
            cout<<p;
            p-=f;
            f++;
        }
        cout<<"\n";
        m+=n-i;
        
    }
    return 0;
}
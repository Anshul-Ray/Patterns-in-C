#include<iostream>
using namespace std;
/*
Pattern - 
1
3*2
4*5*6
10*9*8*7
11*12*13*14*15
*/
// Code -
int main()
{
    system("CLS");
    int i,j,n,k=0,p;
    cout<<"Enter rows :"; cin>>n;
    for(i=1;i<=n;i++)
    {
        i%2!=0?k++:k+=i-1;
        p=k;
        for(j=1;j<=2*i-1;j++)
        {   
            if(j%2==0)
            cout<<"*";
            else
            {
                if(i%2==0)
                {
                    cout<<p;
                    p--;
                }
                else
                {
                    cout<<p;
                    p++;
                    k++;
                }
            }
        }
        cout<<'\n';
    }
    return 0;
}

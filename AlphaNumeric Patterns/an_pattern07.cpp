#include<iostream>
using namespace std;
/*
Pattern - 
   A1
  AB12
 ABC123
ABCD1234
*/
// Code -
int main()
{
    system("CLS");
    int i,j,k,n;
    cout<<"Enter rows :"; cin>>n;
    char a;
    for(i=0 ; i<n ; i++)
    {
        a='A';k=1;
        for(j=0 ; j<=(2*n) ; j++)
        {
            if(j>=n-i && j<=n+1+i)
            {
                
                if(j<=n)
                {
                    cout<<a;
                    a++;
                }
                else
                {
                    cout<<k;
                    k++;
                }
            }
            else
            cout<<" "; 
        }
        cout<<"\n";
    }
    return 0;
}

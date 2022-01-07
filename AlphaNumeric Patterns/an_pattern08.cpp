#include<iostream>
using namespace std;
/*
Pattern -
   1
  12A
 123AB
1234ABC
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
            if(j>=n-i && j<=n+i)
            {
                
                if(j<=n)
                {
                    cout<<k;
                    k++;
                }
                else
                {
                    cout<<a;
                    a++;
                }
            }
            else
            cout<<" "; 
        }
        cout<<"\n";
    }
    return 0;
}


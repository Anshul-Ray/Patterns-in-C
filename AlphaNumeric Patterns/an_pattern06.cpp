#include <iostream>
using namespace std;
/*
Pattern -
   A
  ABA
 ABCBA
ABCDCBA
*/
// Code -
int main()
{
    system("CLS");
    int i,j,n;
    cout<<"Enter rows :"; cin>>n;
    char k;
    for(i=0 ; i<n ; i++)
    {
        k='A';
        for(j=0 ; j<=(2*n-1) ; j++)
        {
            if(j>=n-i && j<=n+i)
            {
                cout<<k;
                if(j<n)
                k++;
                else
                k--;
            }
            else
            cout<<" "; 
        }
        cout<<"\n";
    }
    return 0;
}

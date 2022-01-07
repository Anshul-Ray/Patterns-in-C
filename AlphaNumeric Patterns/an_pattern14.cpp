#include<iostream>
using namespace std;
/*
Pattern -
        A
      C B
    F E D
  J I H G
O N M L K
*/
// Code-
int main()
{
    system("CLS");
    int i, j, n;
    cout<<"Enter rows :"; cin>>n;
    char c='A',ch;
    for(i=1 ; i<=n ; i++)
    {
        ch=c;
        for(j=1 ; j<=n ; j++)
        {
            if(j<=n-i)
            cout<<"   ";
            else
            {
                cout<<" "<<ch<<" ";
                ch--;
            }    
        }
        cout<<"\n";
        c+=i+1;
    }
    return 0;
}

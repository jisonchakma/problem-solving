#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r;
    cin>>r;
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=r-i;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=r;i>=1;i--)
    {
        for(int j=1;j<=r-i;j++)
        {

            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

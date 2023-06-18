#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
       // int count=0;
        if(b>a && c>a && d>a)
        {
            cout<<3<<endl;
        }
        else if(b>a && c>a || b>a && d>a || c>a&&d>a)
        {
            cout<<2<<endl;
        }
        else if(b>a || c>a || d>a)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
    return 0;
}
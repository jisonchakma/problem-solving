#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin>>n;
    if(n%2==0)
    {
        if(n%7==0)
        {
            cout<<"Alice"<<endl;
        }
        else
        cout<<"Chairle"<<endl;
    }
    else
    {
        if(n%9==0)
        {
            cout<<"Bob"<<endl;
        }
        else
        {
            cout<<"Chairle"<<endl;
        }
    }
    
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
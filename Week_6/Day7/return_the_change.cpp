#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll x;
    cin>>x;
    if(x%10!=0)
    {
        ll tmp=x%10;
        if(tmp<5)
        {
            cout<<(100-(abs(x-tmp)))<<endl;
        }
        else
        {
            cout<<(100-(abs(x+(10-tmp))))<<endl;
        }
    }
    else
    {
        cout<<(100-x)<<endl;
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
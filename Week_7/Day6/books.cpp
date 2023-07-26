#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin>>n;
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        sum+=x;
    }
    if(sum&1)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
    
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
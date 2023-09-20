#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin>>n;
    map<ll,ll>mp;
    ll cnt=0;
    for(ll i=1;i<=n;i++)
    {
        ll x;
        cin>>x;
        mp[x]=i;
    }
    for(ll i=1;i<=(n-1);i++)
    {
        if(mp[i]<mp[i+1])
        continue;
        else
        cnt++;
    }
    cout<<cnt<<'\n';


}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
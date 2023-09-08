#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin>>n;
    vector<ll>d(n);
    vector<ll>s(n);
    for(ll i=0;i<n;i++)
    cin>>d[i]>>s[i];
    ll ans=INT_MAX;
    for(ll i=0;i<n;i++)
    {
        ll x=(s[i]-1)/2;
        ans=min(ans,x+d[i]);
    }
    cout<<ans<<'\n';
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
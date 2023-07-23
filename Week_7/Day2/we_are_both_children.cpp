#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin>>n;
    map<ll,ll>mp;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<=n)
        mp[a[i]]++;
   }
    ll ans=0;
    for(ll i=0;i<=n;i++)
    {
        ll tmp=0;
        for(ll x=1;x*x<=i;x++)
        {
            if(i%x==0)
            {
            tmp+=mp[x];
            if(x*x!=i)
            tmp+=mp[i/x];
            }

        }
        ans=max(tmp,ans);
    }
    cout<<ans<<endl;
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
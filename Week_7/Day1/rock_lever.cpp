#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)
    cin>>a[i];
    //vector<pair<ll,ll>>ans;
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
        for(ll j=i+1;j<n;j++)
        {
            ll m1=a[i]&a[j];
            ll m2=a[i]^a[j];
            if(m1>=m2)
            {
           // ans.push_back({a[i],a[j]});
           ans++;

            }
        }
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
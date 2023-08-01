#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n,q;
    cin>>n>>q;
    vector<ll>a(n+1);
    ll prefix[200005];
    ll sum=0;
    for(ll i=1;i<=n;i++)
    {
    cin>>a[i];
    sum+=a[i];
    prefix[i]=prefix[i-1];
    prefix[i]+=a[i];
    }
    while(q--)
    {
        ll l,r,k;
        cin>>l>>r>>k;
        ll ans=prefix[n]-(prefix[r]-prefix[l-1])+k*(r-l+1);
        if(ans&1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        //ans.clear();
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
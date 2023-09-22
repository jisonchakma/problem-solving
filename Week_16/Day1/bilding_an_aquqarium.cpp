#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve()
{
  ll n,x;
  cin>>n>>x;
  vector<ll>a(n);
  for(int i=0;i<n;i++)
  cin>>a[i];
  ll l=0,r=1e10;
  ll ans=0;
  while(l<=r)
  {
    ll mid=l+(r-l)/2LL;
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
        ll d=mid-a[i];
        if(d>0)
        sum+=d;
    }
    if(sum<=x)
    {
    ans=mid;
    l=mid+1;
    }
    else
    r=mid-1;
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
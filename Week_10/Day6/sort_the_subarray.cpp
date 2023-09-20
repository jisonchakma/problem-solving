#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin>>n;
    vector<ll>a(n);
    vector<ll>b(n);
    for(ll i=0;i<n;i++)
    cin>>a[i];
    for(ll i=0;i<n;i++)
    cin>>b[i];
    ll l=0,r=n-1;
    for(ll i=0;i<n;i++)
    {
        if(a[i]==b[i])
        continue;
        l=i;
        break;
    }
    for(ll i=n-1;i>=0;i--)
    {
        if(a[i]==b[i])
        continue;
        r=i;
        break;
    }
    while(l-1>=0&&b[l-1]<=b[l])
    l--;
    while(r+1<n&&b[r+1]>=b[r])
    r++;
    vector<pair<ll,ll>>v;
    for(ll i=l;i<r;i++)
    {
         if(b[i+1]<b[i])
         {
           v.push_back({l,i});
           l=i+1;
         }
    }
    v.push_back({l,r});
    l=0,r=0;
    ll mx=0;
    for(auto i:v)
    {
        if(i.second-i.first+1>mx)
        {
            mx=i.second-i.first+1;
            l=i.first;
            r=i.second;
        }

    }
    cout<<l+1<<" "<<r+1<<"\n";
    v.clear();
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
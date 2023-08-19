#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin>>n;
    ll ans=0;
    vector<ll>ans1,ans2;
    for(ll j=0;j<n;j++)
    {
        ll m;
        cin>>m;
        vector<ll>a(m);
        for(ll i=0;i<m;i++)
        cin>>a[i];
        sort(a.begin(),a.end());
        ans1.push_back(a[0]);
        ans2.push_back(a[1]);

    }
    sort(ans1.begin(),ans1.end());
    sort(ans2.begin(),ans2.end());
    reverse(ans2.begin(),ans2.end());
    ans2.pop_back();
    ans+=ans1[0];
    for(auto val:ans2)
    ans+=val;
    cout<<ans<<endl;
    
}
int main()
{
    int t;
    cin>>t;
    int cs=1;
    for(int i=cs;i<=t;i++)
    {
    solve();
    }
    return 0;
}
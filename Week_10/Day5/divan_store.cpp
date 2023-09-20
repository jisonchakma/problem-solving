#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n,l,r,k;
    cin>>n>>l>>r>>k;
    vector<ll>a(n);
    vector<ll>ans;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>=l&&a[i]<=r)
        ans.push_back(a[i]);
    }
    ll tmp=0;
    ll sum=0;
    ll cnt=0;
    sort(ans.begin(),ans.end());
    for(ll i=0;i<ans.size();i++)
    {
        if((sum+=ans[i])<=k)
        cnt++;
        else
        break;
    }
    cout<<cnt<<endl;
    ans.clear();

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
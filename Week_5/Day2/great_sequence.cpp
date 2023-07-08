#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n,x;
    cin>>n>>x;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)
    cin>>a[i];
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    map<ll,ll>mp;
    for(ll i=0;i<n;i++)
    mp[a[i]]++;
    ll cnt=0;
    for(ll i=n-1;i>=0;i--)
    {
        if(mp[a[i]])
        {
            if(mp[x*a[i]])
            {
                mp[x*a[i]]--;
            }
            else
            {
                cnt++;

            }
            mp[a[i]]--;
        }
    }
    cout<<cnt<<endl;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
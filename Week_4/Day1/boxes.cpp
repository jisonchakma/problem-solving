#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        ll mx=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]&1)
            a[i]--;
        }
        map<ll,ll>mp;
        for(ll i=0;i<n;i++)
        {
            ll ans=0;
            while(a[i]>1)
            {
                ans++;
                a[i]/=2;
            }
            mp[ans]++;
            mx=max(mx,ans);
        }
        ll f_ans=ceil(mp[mx]*1.0/2);
        cout<<f_ans<<endl;
    }
    return 0;
    
}
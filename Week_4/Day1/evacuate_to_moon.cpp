#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,h;
        cin>>n>>m>>h;
        vector<ll>a(n);
        vector<ll>b(m);
        for(ll i=0;i<n;i++)
        cin>>a[i];
        for(ll i=0;i<m;i++)
        cin>>b[i];
        sort(a.begin(),a.end(),greater<ll>());
        sort(b.begin(),b.end(),greater<ll>());
        ll ans=0;
        for(ll i=0,j=0;i<n&&j<m;i++,j++)
        {
            if(b[j]*h>a[i])
            ans+=a[i];
            else
            ans+=b[j]*h;

        }
        cout<<ans<<endl;

    }
    return 0;
}
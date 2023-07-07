#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll gcd1=0,gcd2=0;
    for(ll i=0;i<n;i++)
    {
        if(i%2==0)
        {
            gcd1=__gcd(gcd1,a[i]);
        }
        else
        {
            gcd2=__gcd(gcd2,a[i]);
        }
    }
    ll ar=0,b=0;
    for(ll i=1;i<n;i+=2)
    {
        if(a[i]%gcd1==0)
        {
            ar=1;
            break;
        }
    }
    for(ll i=0;i<n;i+=2)
    {
        if(a[i]%gcd2==0)
        {
            b=1;
            break;
        }
    }
    if(ar==1&&b==1)
    cout<<0<<endl;
    else if(ar==0)
    cout<<gcd1<<endl;
    else
    cout<<gcd2<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
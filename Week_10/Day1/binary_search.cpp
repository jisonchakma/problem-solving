#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    while(k--)
    {
        bool is_find=false;
        ll x;
        cin>>x;
        ll l=0;
        ll r=n-1;
        while(l<=r)
        {
            ll mid=l+(r-l)/2;
            if(a[mid]==x)
            {
                 is_find=true;
                 break;
            }
            else if(a[mid]<x)
            l=mid+1;
            else
            r=mid-1;
        }
        if(is_find==true)
        cout<<"YES"<<'\n';
        else
        cout<<"NO"<<'\n';
    }
    return 0;

}
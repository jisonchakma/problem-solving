#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll w,h,n;
bool good(ll x)
{
    return (x/w)*(x/h)>=n;
}
int main()
{
    cin>>w>>h>>n;
    ll l=0;
    ll r=1;
    while(!good(r))
    r*=2;
    while(r>l+1)
    {
        ll mid=l+(r-l)/2;
        if(good(mid))
        {
            r=mid;
        }
        else
        l=mid;
    }
    cout<<r<<'\n';
    return 0;

    
}
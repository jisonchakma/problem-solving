#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll dif(ll x,ll y,ll z)
{
    return abs(x+z-2*y);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        ll d=min(min(dif(a,b,c),dif(b,a,c)),dif(a,c,b));
        ll d1=min(min(dif(a-1,b,c-1),dif(b-1,a,c-1)),dif(a-1,c,b-1));
        ll ans=min(d,d1);
        cout<<ans<<endl;
    }
    return 0;

}
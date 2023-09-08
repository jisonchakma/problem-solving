#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a,ll b)
{
    if(b==0)
    return a;
    return gcd(b,a%b);
}
void solve()
{
    ll n,x,y;
    cin>>n>>x>>y;
    ll cnt1=0,cnt2=0,ans=0;
    if(x%y==0)
    cnt2=(n/y)-(n/x);
    else if(y%x==0)
    cnt1=(n/x)-(n/y);
    else
    {
        ll tmp=(x*y)/gcd(x,y);
        cnt1=(n/x)-(n/tmp);
        cnt2=(n/y)-(n/tmp);

    }
    ans=(n*(n+1))/2;
    n-=cnt1;
    ans-=(n*(n+1))/2;
    ans-=(cnt2*(cnt2+1))/2;
    cout<<ans<<'\n';

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
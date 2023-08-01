#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin>>n;
    ll cnt=0;
    ll ans=0;
    for(ll i=1;i<=10000;i++)
    {
        if(n%i==0)
        cnt++;
        else
        {
            cnt=0;
        }

        ans=max(ans,cnt);
    }
    cout<<ans<<endl;
    
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
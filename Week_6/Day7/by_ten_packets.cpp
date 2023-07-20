#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll x,y;
    cin>>x>>y;
    ll x1=x*5;
    ll y1=y*2+x;
    ll ans=min(x1,y1);
    cout<<ans<<endl;
    

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
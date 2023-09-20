#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD=1e9+7;
void solve()
{
    ll n,k;
    cin>>n>>k;
    ll ans=1;
    //int tmp=n;
    while(k--)
    {
       ans=(ans*n)%MOD;

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
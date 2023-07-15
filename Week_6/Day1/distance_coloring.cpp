#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD=1e9+7;
void solve()
{
    ll n,k;
    cin>>n>>k;
    ll cnt=1;
    for(ll i=1;i<=n;i++)
    {
        if(k>0)
        {
            cnt=(cnt*k)%MOD;
            k--;
        }
        else
        break;
    }
    cout<<cnt<<endl;

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
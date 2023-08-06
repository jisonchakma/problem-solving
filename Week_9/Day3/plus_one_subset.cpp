#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin>>n;
    vector<ll>a(n);
    ll mx=INT_MIN;
    ll mn=INT_MAX;
    for(ll i=0;i<n;i++)
    {
    cin>>a[i];
    mn=min(mn,a[i]);
    mx=max(mx,a[i]);
    }
    cout<<abs(mx-mn)<<endl;
    

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
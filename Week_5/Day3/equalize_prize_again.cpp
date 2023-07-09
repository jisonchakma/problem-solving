#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int q;
    cin>>q;
    vector<ll>a(q);
    ll sum=0;
    for(ll i=0;i<q;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
   // cout<<sum<<endl;
    //ll n_price=0;
    if(sum%q==0)
    {
        cout<<sum/q<<endl;
    }
    else
    cout<<(sum/q)+1<<endl;

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
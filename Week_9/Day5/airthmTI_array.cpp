#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin>>n;
    vector<ll>a(n);
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=(a[i]);
    }
    if(sum<n)
    cout<<1<<endl;
    else
    cout<<sum-n<<endl;
    
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
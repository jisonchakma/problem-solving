#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin>>n;
    vector<char>s(n);
    for(ll i=0;i<n;i++)
    cin>>s[i];
    vector<ll>a(n);
    for(ll i=0;i<n;i++)
    cin>>a[i];
    ll sum=0;
    ll tmp=0;
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='1')
        sum+=max(a[i],tmp);
        if(s[i]=='0' or a[i]<tmp)
        tmp=a[i];
    }
    cout<<sum<<endl;
    
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
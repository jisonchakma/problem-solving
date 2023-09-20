#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)
    cin>>a[i];
    string s;
    cin>>s;
    bool is_find=true;
    for(ll i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
        {
           is_find=false;
           break;
        }

    }
    if(is_find==true)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

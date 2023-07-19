#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin>>n;
    vector<ll>a(n);
    set<ll>m;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        m.insert(a[i]);
    }
    set<ll>::reverse_iterator it;
    ll sum=0;
    sum+=(*(m.rbegin()));
    m.erase((*m.rbegin()));
    sum+=(*(m.rbegin()));
    cout<<sum<<endl;


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
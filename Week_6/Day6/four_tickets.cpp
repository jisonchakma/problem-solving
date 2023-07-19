#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll x;
    cin>>x;
    ll total=x*4;
    if(total<=1000)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    
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
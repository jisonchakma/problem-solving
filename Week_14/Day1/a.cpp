#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    ll ans1=0;
    ans1=((abs(a-b)+1)/2+c-1)/c;
    cout<<ans1<<'\n';
    
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
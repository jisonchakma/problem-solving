#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n,k;
    cin>>n>>k;
    if(n%2!=0&&k%2==0)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
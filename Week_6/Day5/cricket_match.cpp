#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n,m;
    cin>>n>>m;
    int run=m*6*6;
    if(run>=n)
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
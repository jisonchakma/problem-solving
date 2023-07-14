#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll w,l;
    cin>>w>>l;
    if(w%2!=0&&l%2!=0)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
    
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
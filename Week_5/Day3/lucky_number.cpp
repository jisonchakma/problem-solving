#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int l,r;
    cin>>l>>r;
   // int l_n=l;
   // int r_n=r;
    r= min(r, l+100);
    int mx=0;
    int ans = l;
    // string s = 
    int bt = 0;
    for(int i=l;i<=r;i++)
    {
        string x = to_string(i);
        int mn, mx2;
        mn = mx = x[0] - '0';
        for(int j=0; j<x.size(); j++) {
            mn = min(mn, x[j]-'0');
            mx = max(mx, x[j]-'0');
        }
        int cr_bt = mx-mn;
        if(cr_bt>=bt) {
            ans = i;
            bt = cr_bt;
        }
    }
    
    cout<<ans<<endl;
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
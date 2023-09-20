#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin>>n;
    int mx_x=0,mx_y=0,mn_x=0,mn_y=0;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        mx_x=max(x,mx_x);
        mx_y=max(y,mx_y);
        mn_x=min(x,mn_x);
        mn_y=min(y,mn_y);
    }
    int ans=0;
    ans=2*(mx_x+mx_y-mn_x-mn_y);
    cout<<ans<<endl;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
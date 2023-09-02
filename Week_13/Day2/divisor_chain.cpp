#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int x;
    cin>>x;
    int now=1;
    vector<int>ans;
    while(now<=x)
    {
        ans.push_back(now);
        now*=2;
    }
    if(ans.back()!=x)
    {
        int dif=x-ans.back();
        for(int i=30;i>=0;i--)
        {
            if(dif&(i<<i))
            {
                ans.push_back(ans.back()+(i<<i));
            }
        }
    }
    reverse(ans.begin(),ans.end());
    cout<<ans.size()<<'\n';
    for(auto val:ans)
    cout<<val<<" ";
    cout<<'\n';
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
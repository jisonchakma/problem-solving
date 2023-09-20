#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll mn=0;
    vector<pair<int,int>>ans;
    for(int i=0;i<2;i++)
    {
        int x,y;
        cin>>x>>y;
        ans.push_back({x,y});
    }
    for(int i=0;i<2;i++)
    {
        if(ans[i].first==1)
        mn++;
        if(ans[i].second==1)
        mn++;
    }
    if(mn==4)
    cout<<2<<endl;
    else if(mn==0)
    cout<<0<<endl;
    else
    cout<<1<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin>>n;
    vector<pair<int,int>>ans;
    while(n--)
    {
        int s,e;
        cin>>s>>e;
        ans.push_back({s,e});
    }
    pair<int,int>tmp={ans[0].first,ans[0].second};
    bool is_find=true;
    for(int i=1;i<ans.size();i++)
    {
        if(ans[i].first>=tmp.first &&ans[i].second>=tmp.second)
        {
            is_find=false;
            break;
        }
    }
    if(is_find)
    {
        cout<<tmp.first<<'\n';
    }
    else
    cout<<-1<<'\n';
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
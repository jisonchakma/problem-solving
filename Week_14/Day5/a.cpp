#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin>>n;
    vector<pair<int,int>>a;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.push_back({x,i});
    }
    sort(a.begin(),a.end());
    int mx=n;
    int ans[n];
    for(int i=0;i<n;i++)
    {
        ans[a[i].second]=mx;
        mx--;
    }
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
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    vector<int>ans;
    vector<pair<int,int>>b;
    for(int i=0;i<n;i++)
    {
        if(a[i]%k==0)
        {
            ans.push_back(i+1);
        }
        else
        {
            b.push_back({(a[i]%k),i+1});
        }
    }
    sort(b.begin(),b.end(),[&](pair<int,int>x,pair<int,int>y)
    {
          if(x.first==y.first)
          {
            return x.second<y.second;
          }
          return x.first>y.first;
    });
    for(auto val:b)
    {
        ans.push_back(val.second);
    }
    for(int i=0;i<n;i++)
    cout<<ans[i]<<" ";
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
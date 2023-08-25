#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<vector<char>>a(n,vector<char>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    queue<char>ans;
    ans.push('v');
    ans.push('i');
    ans.push('k');
    ans.push('a');
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[j][i]==ans.front())
            {
                ans.pop();
                break;
            }
        }
    }
    if(ans.empty())
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin>>n;
    int grid[n][n-1];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            cin>>grid[i][j];
        }
    }
    vector<int>cnt(n+1);
    for(int i=0;i<n;i++)
    cnt[grid[i][0]]++;
    int x=0,y=0;
    for(int i=1;i<=n;i++)
    {
        if(cnt[i]>1)
        {
             x=i;        
        }
        if(cnt[i]==1)
        y=i;
    }
    int row=-1;
    for(int i=0;i<n;i++)
    {
        if(grid[i][0]==y)
        {
            row=i;
            break;
        }
    }
    cout<<x<<" ";
    for(int i=0;i<n-1;i++)
    cout<<grid[row][i]<<" ";
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
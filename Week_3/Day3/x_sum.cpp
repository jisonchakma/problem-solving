#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m;
const int N=1000;
int grid[N][N];
ll dig_sum(int i,int j)
{
    ll ans=0;
    int idx=0;
    while(i-idx>-1&&j-idx>-1)
    {
        ans+=grid[i-idx][j-idx];
        idx++;

    }
    idx=0;
    while(i-idx>-1 &&j+idx<m)
    {
        ans+=grid[i-idx][j+idx];
        idx++;
    }
    idx=0;
    while(i+idx<n&&j+idx<m)
    {
        ans+=grid[i+idx][j+idx];
        idx++;
    }
    idx=0;
    while(i+idx<n&&j-idx>-1)
    {
        ans+=grid[i+idx][j-idx];
        idx++;
    }
    return ans-3*(grid[i][j]);

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        //int grid[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>grid[i][j];
            }
        }
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                 sum=max(sum,dig_sum(i,j));
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
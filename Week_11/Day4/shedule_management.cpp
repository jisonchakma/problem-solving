#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<int>tmp(n+1);
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        tmp[x]++;
    }
    int sum,l=0,r=2*m,ans,mid;
    while(l<=r)
    {
        mid=l+(r-l)/2;
        sum=0;
        for(int i=1;i<=n;i++)
        sum+=max(0,tmp[i]-mid);
        for(int i=1;i<=n;i++)
        sum-=min(sum,max(0,(mid-tmp[i])/2));
        if(sum<=0)
        {
            ans=mid;
            r=mid-1;
        }
        else
        l=mid+1;

    }
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
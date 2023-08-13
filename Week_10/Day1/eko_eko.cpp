#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    int mx=INT_MIN;
    for(ll i=0;i<n;i++)
    {
    cin>>a[i];
    mx=max(mx,a[i]);
    }
    int l=0;
    int r=mx;
    int ans=-1;
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        ll sum=0;
        for(int i=0;i<n;i++)
        {
           if(a[i]>mid)
           {
            sum+=(a[i]-mid);
           }
        }
        if(sum>=m)
        {
            ans=mid;
            l=mid+1;    
        }
        else
        r=mid-1;

    }
    cout<<ans<<'\n';
    return 0;
}
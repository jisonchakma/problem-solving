#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        vector<int>a(n);
        int mx=INT_MIN;
        for(int i=0;i<n;i++)
        {
        cin>>a[i];
        mx=max(mx,a[i]);
        }
        int l=mx,r=INT_MAX;
        int ans;
        while(l<=r)
        {
            int cap=l+(r-l)/2;
            int cnt=1;
            int sum=0;
            for(int i=0;i<n;i++)
            {
                if(sum+a[i]<=cap)
                {
                    sum+=a[i];
                }
                else
                {
                    cnt++;
                    sum=a[i];
                }
            }
            if(cnt<=m)
            {
                ans=cap; 
                r=cap-1;     
            }
            else
            l=cap+1;

        }
        cout<<ans<<endl;

    }
    return 0;
}
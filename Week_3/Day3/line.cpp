#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<ll>dis_cnt;
        ll total=0;
        ll minimum_change=0;
        for(ll i=0;i<n;i++)
        {
            ll L=i;
            ll R=n-i-1;
            if(s[i]=='L')
            {
                if(R>L)
                {
                    minimum_change++;
                    total+=R;
                    dis_cnt.push_back(R-L);
                }
                else
                total+=L;
            }
            else
            {
                if(L>R)
                {
                    minimum_change++;
                    total+=L;
                    dis_cnt.push_back(L-R);
                }
                else
                total+=R;
            }
        }
        vector<ll>ans(n+1);
        for(ll i=minimum_change;i<=n;i++)
            {
                ans[i]=total;
            }
         sort(dis_cnt.begin(),dis_cnt.end(),greater<ll>());
        for(ll i=minimum_change-1;i>=1;i--)
         {
        total-=dis_cnt.back();
         dis_cnt.pop_back();
         ans[i]=total;
            }
     for(ll i=1;i<=n;i++)
     {
        cout<<ans[i]<<" ";
     }
     cout<<"\n";


    }
    return 0;

}
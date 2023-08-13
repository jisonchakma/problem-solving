#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll  ok(ll mid)
{
   ll sum=0;
   ll m=mid;
   while(m!=0)
   {
      sum+=(m%10);
      m=m/10;
   }
   return sum;
}
int main()
{
    ll n,s;
    cin>>n>>s;
    ll l=10;
    ll r=n;
    ll ans=0;
    while(l<=r)
    {
        ll mid=l+(r-l)/2;
        if(mid-ok(mid)>=s)
        {
            ans=n-mid+1;
            r=mid-1;    
        }
        else
        l=mid+1;
     }
     cout<<ans<<endl;
     return 0;
}

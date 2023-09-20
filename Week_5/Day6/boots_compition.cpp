#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)
    cin>>a[i];
    ll ans=0;
    sort(a.begin(),a.end());
    for(ll sum=1;sum<=100;sum++)
    {
        ll cnt=0;
        for(ll i=0,j=n-1;i<j;)
        {
            if(a[i]+a[j]>sum)
            j--;
            else if(a[i]+a[j]<sum)
            i++;
            else
            {
                cnt++;
                i++;
                j--;


            }
        }
        ans=max(cnt,ans);

    }
    cout<<ans<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
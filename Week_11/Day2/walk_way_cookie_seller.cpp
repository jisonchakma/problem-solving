#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n,m,d;
    cin>>n>>m>>d;
    vector<ll>a(m);
    for(int i=0;i<m;i++)
    cin>>a[i];
    ll sum=m;
    for(int i=0;i<m-1;i++)
    {
        ll cur=a[i];
        ll nxt=a[i+1];
        sum+=((nxt-cur-1)/d);

    }
    if(a[0]!=1)
    {
        sum+=((a[0]-2)/d);
        sum+=1;
    }
    sum+=((n-a[m-1])/d);
    vector<ll>coin(m);
    ll ans=1e18;
    for(int i=1;i<m-1;i++)
    {
        ll prv=a[i-1];
        ll nxt=a[i+1];
        ll now=a[i];
        ll tmp=sum;
        tmp-=((now-prv-1)/d);
        tmp-=((nxt-now-1)/d);
        tmp--;
        tmp+=((nxt-prv-1)/d);
        coin[i]=tmp;
        ans=min(ans,tmp);

    }
    {
        ll tmp=sum;
        if(a[0]!=1)
        {
            tmp-=(a[0]-2)/d;
            tmp-=1;
        }
        tmp--;
        tmp-=(a[1]-a[0]-1)/d;
        tmp+=(a[1]-2)/d;
        tmp++;
        ans=min(ans,tmp);
        coin[0]=tmp;

    }
    {
        ll tmp=sum;
        tmp-=(n-a[m-1])/d;
        tmp--;
        tmp-=(a[m-1]-a[m-2]-1)/d;
        tmp+=(n-a[m-2])/d;
        ans=min(ans,tmp);
        coin[m-1]=tmp;
    }
    cout<<ans<<" ";
    ll cnt=0;
    for(int i=0;i<m;i++)
    {
        cnt+=(coin[i]==ans);
    }
    cout<<cnt<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
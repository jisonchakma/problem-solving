#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef  pair<ll,ll>pii;
const int N=2e5+5;
int n,k,a,b;
pii point[N];
ll get_distance(pii a,pii b)
{
    return abs(a.first-b.first)+abs(a.second-b.second);
}
ll get_min_distance(pii a)
{
    ll ans=1e18;
    for(int i=0;i<k;i++)
    {
        ans=min(ans,get_distance(a,point[i]));
    }
    return ans;
}

void solve()
{
    cin>>n>>k>>a>>b;
    a--;
    b--;
    for(int i=0;i<n;i++)
    {
        cin>>point[i].first>>point[i].second;
    }
    ll ans=get_distance(point[a],point[b]);
    if(k)
    {
        for(int i=0;i<k;i++)
        {
      ans=min(ans,get_min_distance(point[a])+get_min_distance(point[b]));
        }
    }
    cout<<ans<<'\n';

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}




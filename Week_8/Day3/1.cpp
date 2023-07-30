 #include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n,m,k,h;
    cin>>n>>m>>k>>h;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)
    cin>>a[i];
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
        bool is_find=false;
        for(ll x=1;x<=m;x++)
        {
            for(ll y=x+1LL;y<=m;y++)
            {
                if(x==y)
                continue;
                ll h_d=abs(a[i]-h);
                ll s_d=y-x;
                s_d*=k;
                if(h_d==s_d)
                {
                    is_find=true;
                }
            }
        }
        ans+=(is_find);
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
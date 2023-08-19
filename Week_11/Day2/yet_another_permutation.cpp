#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin>>n;
    vector<ll>ans;
    vector<bool>visited(n+1,false);
    for(ll i=1;i<=n;i++)
    {
        if(!visited[i])
        {
            for(ll j=i;j<=n;j*=2)
            {
                visited[j]=true;
                ans.push_back(j);

            }
        }
    }
    for(auto val:ans)
    cout<<val<<" ";
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
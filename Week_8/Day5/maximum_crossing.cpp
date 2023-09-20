#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template<typename T>using pbds=tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
#define ll long long
void solve()
{
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)
    cin>>a[i];
    pbds<ll>ans;
    ll cnt=0;
    for(ll i=0;i<n;i++)
    {
        if(ans.empty())
        {
            ans.insert(a[i]);
        }
        else
        {
            ans.insert(a[i]);
            ll tot=(ll)ans.size(),big,small;
            small=ans.order_of_key(a[i]);
            big=(tot-small);
            big--;
            cnt+=(big);

        }
    }
    cout<<cnt<<endl;
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
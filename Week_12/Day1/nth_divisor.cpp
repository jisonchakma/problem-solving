#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    set<ll>st;
    ll n,k;
    cin>>n>>k;
    for(ll j=1;j<=(ll)sqrt(n);j++)
    {
        if(n%j==0)
        {
           ll x=j;
           ll y=n/j;
           st.insert(x);
           st.insert(y);

        }
             
    }
    vector<ll>ans;
    ans.assign(st.begin(),st.end());
    if(st.size()<k)
    cout<<-1<<endl;
    else
    {
        cout<<ans[k-1]<<endl;
        
    }
    return 0;

}
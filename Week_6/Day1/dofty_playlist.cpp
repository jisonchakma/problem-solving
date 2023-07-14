#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll N,K,L;
    cin>>N>>K>>L;
    priority_queue<pair<ll,ll>>a;
    while(N--)
    {
        ll m,l;
        cin>>m>>l;
        if(L==l)
        {
            a.push({m,l});
        }
    }
   // ll sum=0;
    if(a.size()<K)
    {
        cout<<-1<<endl;
    }
    else
    {
    ll sum =0;
    while(K--)
    {
        sum+=a.top().first;
        a.pop();

    }
    cout<<sum<<endl;
    }
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
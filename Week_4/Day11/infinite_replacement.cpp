#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    string s,t;
    cin>>s>>t;
    int n,m;
    n=s.size();
    m=t.size();
    if(t.size()==1)
    {
        if(t[0]=='a')
        cout<<1<<endl;
        else
        {
            ll ans=(1LL<<n);
            cout<<ans<<endl;
        }
    }
    else
    {
        if(count(sort(t.begin(),t.end()),'a')>0)
        {
            cout<<-1<<endl;
        }
        else
        {
            ll ans=(1LL<<n);
            cout<<ans<<endl;
        }
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
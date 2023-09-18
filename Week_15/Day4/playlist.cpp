#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    set<ll>s;
    ll st=0;
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        while(s.count(a[i]))
        {
            s.erase(a[st]);
            st++;
        }
        s.insert(a[i]);
        ans=max(ans,(ll)s.size());

    }
    cout<<ans<<"\n";
    return 0;
}
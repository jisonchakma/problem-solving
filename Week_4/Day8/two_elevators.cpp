#include<bits/stdc++.h>
using namespace std;
#define ll long long
using namespace std;
void solve()
{
    ll a,b,c;
    cin>>a>>b>>c;
    ll ans1=abs(a-1);
    ll ans2=abs(b-c)+abs(c-1);
    if(ans1==ans2)
    cout<<3<<endl;
    else if(ans1<ans2)
    cout<<1<<endl;
    else
    {
        cout<<2<<endl;
    }
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
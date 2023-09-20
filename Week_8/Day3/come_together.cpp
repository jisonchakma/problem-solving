#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll x1,y1,x2,y2,x3,y3,ab=0,ac=0,bc=0;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    ab=abs(x2-x1)+abs(y2-y1)+1;
    ac=abs(x3-x1)+abs(y3-y1)+1;
    bc=abs(x3-x2)+abs(y3-y2)+1;
    if(bc==ab+ac-1)
    cout<<1<<endl;
    else
    {
        ll sum=ab+ac-bc;
        ll ans=(sum-1)/2;
        cout<<ans+1<<endl;
    }
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
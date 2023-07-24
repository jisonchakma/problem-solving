#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll a,b;
    cin>>a>>b;
    ll a_price=100-(100*a)/100;
    ll b_price=200-(200*b)/100;
    if(a_price<b_price)
    cout<<"FIRST"<<endl;
    else if(a_price>b_price)
    {
        cout<<"SECOND"<<endl;
    }
    else
    cout<<"BOTH"<<endl;


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
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    if(n&1)
    {
        ll cnt=n/2;
        cout<<cnt<<'\n';
        for(ll i=1;i<=(n/2)-1;i++)
        cout<<2<<" ";
        cout<<3<<'\n';
    }
    else
    {
        ll cnt1=n/2;
        cout<<cnt1<<"\n";
        while(cnt1--)
        cout<<2<<" ";
        cout<<'\n';

    }
    return 0;
}
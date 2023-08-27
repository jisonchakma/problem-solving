#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool is_prime(ll n)
{
    if(n<2)
    return false;
    if(n<=3)
    return true;
    if(n%2==0)
    return false;
    for(ll i=3;i*i<=n;i+=2)
    {
        if(n%i==0)
        {
        return false;
        }
    }
    return true;
}
int main()
{
    ll n;
    cin>>n;
    if(is_prime(n))
    cout<<1<<'\n';
    else  if(n&1)
    {
        if(is_prime(n-2))
        cout<<2<<endl;
        else
        cout<<3<<'\n';
    }
    else
    cout<<2<<'\n';
    return 0;
}
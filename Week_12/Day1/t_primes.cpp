#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll tmp[1000000]={0};
int main()
{
    tmp[1]=1;
    for(ll i=2;i<=1000;i++)
    {
        for(ll j=2*i;j<=1000000;j+=i)
        {
            tmp[j]=1;
        }
    }
    int n;
    cin>>n;
    while(n--)
    {
        ll x;
        cin>>x;
        ll n=(ll)sqrt(x);
        if((n*n)==x&&tmp[n]==0)
        {
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<'\n';

    }
    return 0;
}
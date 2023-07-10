#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n,k;
    cin>>n>>k;
    if(n%2==0)
    {
        if(k%2==0)
        {
            if(k<=n)
            {
                cout<<"YES"<<endl;
                ll s=k-1;
                for(ll i=1;i<=k-1;i++)
                cout<<1<<" ";
                cout<<n-s<<endl;

            }
            else
            cout<<"NO"<<endl;
        }
        else
        {
            if(k*2<=n)
            {
                cout<<"YES"<<endl;
                for(ll i=1;i<=k-1;i++)
                cout<<2<<" ";
                cout<<n-(k-1)*2<<endl;
            }
            else
            cout<<"NO"<<endl;
        }
    }
    else
    {
        if(k%2==1)
        {
            if(k<=n)
            {
                cout<<"YES"<<endl;
                for(ll i=1;i<=k-1;i++)
                cout<<1<<" ";
                cout<<n-(k-1)<<endl;

            }
            else
            cout<<"NO"<<endl;
        }
        else
        cout<<"NO"<<endl;
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
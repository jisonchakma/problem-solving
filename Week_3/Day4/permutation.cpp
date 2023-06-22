#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>v(n,vector<ll>n+1);
        int m=n;
        while(m--)
        {
            for(ll j=1;j<=n-1;j++)
            {
                ll x;
                cin>>x;
                v.push_back(j);
             }
        }
        

     }
    return 0;
}
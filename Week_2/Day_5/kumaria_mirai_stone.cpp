#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    vector<ll>a(n);
    vector<ll>b;
    vector<ll> pr1(n+1, 0);
    vector<ll> pr2(n+1, 0);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        pr1[i+1] = pr1[i] + a[i];
    }
    sort(a.begin(), a.end());

    for(ll i=0; i<n; i++) {
        pr2[i+1] = pr2[i] + a[i];
    }
    
    ll m;
    cin>>m;
     while(m--)
        {
            ll t,l,r;
            cin>>t>>l>>r;
            if(t==1)
            {
                cout<<pr1[r]- pr1[l-1]<<endl;
            }
            else
            {
                cout<<pr2[r]- pr2[l-1]<<endl;

            }
     }
    return 0;
}
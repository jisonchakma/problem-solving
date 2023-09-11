#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    ll prefix[n];
    prefix[0]=a[0];
    for(int i=1;i<n;i++)
    {
        prefix[i]=prefix[i-1]+a[i];
    }
    ll mx=0L,sum=prefix[n-1];
    for(int i=0;i<n-1;i++)
    {
       mx=max(mx,__gcd(prefix[i],sum-prefix[i]));

    }
    cout<<mx<<'\n';

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin>>n;
    vector<ll>a(n);
    vector<ll>b(n);
    ll min_a=LLONG_MAX;
    ll min_b=LLONG_MAX;
    ll sum_a=0;
    ll sum_b=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum_a+=a[i];
        min_a=min(a[i],min_a);
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        sum_b+=b[i];
        min_b=min(b[i],min_b);
    }
    ll ans_a=sum_a+(n*min_b);
    ll ans_b=sum_b+(n*min_a);
    cout<<min(ans_a,ans_b)<<'\n';

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
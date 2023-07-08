#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)
    cin>>a[i];
    ll count=0;
    ll total_sum=0;
    ll sum_even=0;
    ll sum_odd=0;
    for(ll i=0;i<n;i++)
    {
        total_sum+=a[i];
        if(i%2!=0)
        {
            sum_odd+=a[i];
        }
    }
    for(ll i=0;i<n;i++)
    {
        if(i%2==0)
        {
            sum_even=total_sum-sum_odd-a[i];
        }
        else
        {
            sum_odd=total_sum-sum_even-a[i];
        }
        if(sum_odd==sum_even)
        count++;
    }
    cout<<count<<endl;
    return 0;
}
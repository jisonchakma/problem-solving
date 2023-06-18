#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll mx=INT_MIN;
    ll sum=0;
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll min_odd=0;
    ll mn=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            min_odd=a[i];
            mn=min(mn,min_odd);
        }
    }
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    if(sum%2==0)
    {
        cout<<sum<<endl;
    }
    else
    {
        cout<<sum-mn<<endl;
    }
    return 0;

}
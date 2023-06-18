#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int i=0,j=0;
    ll sum=0;
    ll mx=INT_MIN;
    while(j<n)
    {
        if(a[j]<0 && k>0)
        {
            continue;
        }
        sum+=a[j];
        j++;
        if(j<k-1)
        {
            j++;
        }
        else
        {
         mx=max(sum,mx);
         sum-=a[i];
         i++;
         j++;
        }
    }
    cout<<mx<<endl;
}
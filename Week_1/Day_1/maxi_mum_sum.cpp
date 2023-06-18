#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int sum=0,i=0,j=0;
    int ans=INT_MIN;
    while(j<n)
    {
        sum+=a[j];
        if(j<k-1)
        {
            j++;
        }
        else
        {
        ans=max(sum,ans);
        sum-=a[i];
        i++;
        j++;
     }
    }
    cout<<ans<<endl;
    return 0;
}
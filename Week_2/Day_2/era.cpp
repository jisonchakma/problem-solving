#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int ans=0;
    int d=0;
    for(int i=0;i<n;i++)
    {
        if((i+1)<a[i])
        {
            d=(abs((i+1)-a[i]));
            ans=max(ans,d);
        }
    }
    cout<<ans<<endl;
    }
    return 0;
}
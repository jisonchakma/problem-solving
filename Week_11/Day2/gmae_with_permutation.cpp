#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    int mn_f=INT_MAX;
    int mn_sc=INT_MAX;
    int ans=0;
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    {
        if(a[i]>mn_f&&a[i]<mn_sc)
        {
            ans++;
            mn_sc=min(mn_sc,a[i]);
        }
        mn_f=min(mn_f,a[i]);
    }
    cout<<ans<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
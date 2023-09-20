#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    int mx=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mx=max(mx,a[i]);
    }
    int cnt=-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=mx)
        continue;
        if(i>0&&a[i-1]!=mx)
        cnt=i+1;
        if(i<n-1&&a[i+1]!=mx)
        cnt=i+1;
    }
    cout<<cnt<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
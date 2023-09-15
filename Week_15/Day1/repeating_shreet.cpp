#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    int mx=INT_MAX;
    for(int i=1;i<101;i++)
    {
        int j=0;
        int cnt=0;
        while(j<n)
        {
            while(a[j]==i&&j<n)
            j++;
            if(j>=n)
            break;
            j+=k;
            cnt++;
        }
        mx=min(cnt,mx);
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
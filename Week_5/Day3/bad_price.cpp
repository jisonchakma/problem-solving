#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    int mn=a[n-1];
    int cnt=0;
    for(int i=n-2;i>=0;i--)
    {
        if(a[i]>mn)
        {
            cnt++;
        }
        mn=min(mn,a[i]);
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
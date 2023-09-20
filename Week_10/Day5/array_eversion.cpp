#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    int cnt=0;
    int mx=a[n-1];
    for(int i=n-2;i>=0;i--)
    {
        if(a[i]>mx)
        {
            cnt++;
            mx=a[i];
        }
    }
    cout<<cnt<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
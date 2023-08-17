#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin>>n;
    vector<ll>a(n);
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
    cin>>a[i];
    mp[a[i]]++;
    }
    int mx=0;
    for(int i=0;i<n;i++)
    {
       mx=max(mx,mp[a[i]]);
    }
    cout<<mx<<endl;
    mx=0;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
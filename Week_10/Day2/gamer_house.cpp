#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,h;
    cin>>n>>h;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    int l=0;
    int r=n;
    int cnt=0;
    int sum=0;
    while(l<=r)
    {
        int mid=l+(l-r)/2;
        for(int i=0;i<n;i++)
        {
           if(sum+a[i]<=h)
           {
            cnt++;
           }
           else
           l=mid-1;
        }
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
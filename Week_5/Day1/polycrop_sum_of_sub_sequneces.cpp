#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n=7;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    if(a[0]+a[1]==a[2])
    {
     cout<<a[0]<<" "<<a[1]<<" "<<a[3]<<endl;
    }
    else
    {
     cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
    }
    
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
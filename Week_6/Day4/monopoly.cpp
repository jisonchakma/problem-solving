#include<bits/stdc++.h>
using namespace std;
void solve()
{
    vector<int>a(4);
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    if(a[3]>a[0]+a[1]+a[2])
    {
        cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;
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
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    cout<<2<<endl;
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        for(int j=i;j<=n;j*=2)
        cout<<j<<" ";
    }
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
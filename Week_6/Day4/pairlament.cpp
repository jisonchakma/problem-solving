#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,x;
    cin>>n>>x;
    int ag=n-x;
    if(x>=ag)
    cout<<"YES"<<endl;
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
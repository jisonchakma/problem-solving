#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int x,y;
    cin>>x>>y;
    if(x<=8)
    {
        if(x*y<=500)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
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
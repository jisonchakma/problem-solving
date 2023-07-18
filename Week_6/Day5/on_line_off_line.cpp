#include<bits/stdc++.h>
using namespace std;
void solve()
{
    double n,m;
    cin>>n>>m;
    double per=n*0.1;
    double dis=n-per;
   // cout<<per<<" ";
    if(dis<m)
    cout<<"ONLINE"<<endl;
    else if(dis>m)
    cout<<"DINING"<<endl;
    else
    cout<<"EITHER"<<endl;
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
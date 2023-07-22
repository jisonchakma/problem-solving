#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    if(n%2==0)
    {
        int tmp=2;
        for(int i=0;i<n;i++)
        {
            cout<<tmp<<" ";
            tmp+=2;
        }
        cout<<endl;
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
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
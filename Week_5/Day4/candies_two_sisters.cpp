#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int  n;
    cin>>n;
    int ans=n/2;
    if(n%2==0)
    ans--;
    cout<<ans<<endl;
    

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
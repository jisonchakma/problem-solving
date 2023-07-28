#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,a,b;
    cin>>n>>a>>b;
    int odd=0;
    int even=0;
    for(int i=1;i<=n;i++)
    {
        if(i&1)
        odd++;
        else
        even++;

    }
    int ans=a*even+b*odd;
    cout<<ans<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
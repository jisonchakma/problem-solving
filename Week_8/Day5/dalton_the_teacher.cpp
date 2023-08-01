#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==(i+1))
        {
            cnt++;
        }
    }
    int ans=cnt/2;
    if(cnt%2!=0)
    ans++;
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
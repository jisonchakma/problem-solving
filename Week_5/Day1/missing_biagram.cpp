#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string s[n+5];
    for(int i=0;i<n-2;i++)
    cin>>s[i];
    string ans;
    ans=s[0];
    int cnt=0;
    for(int i=1;i<n-2;i++)
    {
        int z=ans.size()-1;
        if(ans[z]==s[i][0])
        {
            ans+=s[i][1];
        }
        else
        {
            cnt=1;
            ans+=s[i];
        }
    }
    if(cnt==0)
    ans+='a';
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
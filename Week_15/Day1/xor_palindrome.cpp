#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0,cnt0=0,cnt1=0;
    int i=0,j=n-1;
    while(i<j)
    {
        if(s[i]!=s[j])
        cnt++;
        else if(s[i]==s[j]&&s[i]=='0')
        cnt0++;
        else if(s[i]==s[j]&&s[i]=='1')
        cnt1++;
        i++;
        j--;
    }
    vector<int>ans(n+1);
    if(cnt==0)
    ans[0]=1;
    int tmp=0;
    if(n&1)
    tmp=1;
    for(int i=1;i<=n;i++)
    {
        if(cnt>i)
        continue;
        int x=i-cnt;
        if(x>((cnt0*2+cnt1*2)+tmp))
        continue;
        if(x&1)
        {
            if(n%2==0)
            continue;
            else
            ans[i]=1;
        }
        else
        ans[i]=1;
     }
     string f_ans;
     for(int i=0;i<=n;i++)
     {
        f_ans+=(ans[i]+'0');
     }
     cout<<f_ans<<'\n';

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin>>s;
    string ans="";
    int s0=s[0]-'0';
    int s1=s[1]-'0';
    int d=s0*10+s1;
    int n1=s[3]-'0';
    int n2=s[4]-'0';
    int m=n1*10+n2;
    if(d<=12&&m<=12)
    ans+="BOTH";
    else if(m>12&&d<=31)
    {
        ans+="MM/DD/YYYY";
    }
    else if(d>12&&m<=12)
    {
        ans+="DD/MM/YYYY";
    }
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
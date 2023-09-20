#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,a,b;
    cin>>n>>a>>b;
    string ans="";
    int x=a-b;
    while(x--)
    {
        ans+='a';
    }
    for(int i=0;i<b;i++)
    {
        ans+=char(i+97);
    }
    int y=n%a;
    int z=n/a;
    string s="";
    for(int i=0;i<z;i++)
    {
       s=s+ans; 
    }
   // cout<<s<<"\n";
    for(int i=0;i<y;i++)
    {
        s+=ans[i];
    }
    cout<<s<<"\n";

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
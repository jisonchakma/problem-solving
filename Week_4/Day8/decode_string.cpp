#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    string ans="";
    for(int i=0;i<n;i++)
    {
        if(i+2<n &&s[i+2]=='0'&& ((i+3)>=n or s[i+3]!='0'))
        {
            int num=(((s[i]-'0')*10)+(s[i+1]-'0'));
            ans+=((char)(96+num));
            i+=2;

        }
        else
        {
            int num1=((s[i]-'0'));
            ans+=((char)(96+num1));
        }
    }
    cout<<ans<<endl;

}
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        solve();
    }
}
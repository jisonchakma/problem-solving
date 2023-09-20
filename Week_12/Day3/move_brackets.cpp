#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll ans=0;
    ll tmp=0;
    for(int i=0;i<n;i++)
    {
        char ch=s[i];
        if(ch=='(')
        {
             tmp++;
        }
        else
        {
            tmp--;
            if(tmp<0)
            {
                tmp=0;
                ans++;
            }
        }
        
    }
    cout<<ans<<'\n';
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
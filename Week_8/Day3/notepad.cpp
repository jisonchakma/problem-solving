#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int op=0;
    bool is_find=true;
    ll cnt=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]==s[i+1])
        {
           cnt++;
        }
        else
        {
            op++;
        }
    }
    cout<<op<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
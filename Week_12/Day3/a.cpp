#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n,a,q;
    cin>>n>>a>>q;
    string s;
    cin>>s;
    bool is_find=false;
    if(a==n)
    is_find=true;
    ll cnt1=a;
    ll cnt2=a;
    for(int i=0;i<q;i++)
    {
        char ch=s[i];
        if(ch=='+')
        {
            cnt1++;
            cnt2++;
            if(cnt1>=n)
            is_find=true;
        }
        else
        cnt1--;
    }
    if(cnt2>=n)
    {
        if(is_find)
        cout<<"YES"<<'\n';
        else
        cout<<"MAYBE"<<'\n';
    }
    else
    cout<<"NO"<<'\n';
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;

}
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin>>s;
    int n=s.size();
    bool is_find=true;
    if(n%2==0)
    {
        for(int i=0;i<n/2;i++)
        {
            if(s[i]!=s[i+n/2])
            is_find=false;
        }

    }
    else
    {
    
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
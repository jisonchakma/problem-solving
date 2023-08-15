#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin>>s;
    int idx=0;
    for(int i=1;i<s.size();i++)
    {
        if(s[idx]>s[i])
        idx=i;
    }
    cout<<s[idx]<<" ";
    for(int i=0;i<s.size();i++)
    {
        if(i==idx)
        continue;
        cout<<s[i];

    }
    cout<<endl;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
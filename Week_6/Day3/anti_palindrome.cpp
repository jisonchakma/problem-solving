#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<char,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[s[i]-'a']++;
    }
    int mn=0;
    for(int i=0;i<n;i++)
    {
        if(mp[i]>=2)
        {
            mn+=(mp[i])-1;
        }
    }
    //cout<<endl;
    cout<<mn<<endl;


}
int main()
{
    int c;
    cin>>c;
    while(c--)
    {
        solve();
    }
    return 0;
}
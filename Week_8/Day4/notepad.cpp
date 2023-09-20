#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<pair<char,char>,int>mp;
    pair<char,char>prev={s[0],s[1]};
    mp[prev]++;
    for(int i=2;i<n;i++)
    {
        pair<char,char>ab={s[i-1],s[i]};
        if(mp[ab]!=0)
        {
            if((ab==prev&&mp[ab]>1)||(ab!=prev))
            {
                cout<<"YES"<<endl;
                return;
            }
        }
        prev=ab;
        mp[ab]++;

    }
    cout<<"NO"<<endl;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
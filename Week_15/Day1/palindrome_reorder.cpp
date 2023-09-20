#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string S;
    cin>>S;
    map<char,int>mp;
    for(int i=0;i<=S.size()-1;i++)
    {
        mp[S[i]-'A']++;
    }
    int odds=0;
    int oddi=-1;
    for(int i=0;i<=25;i++)
    {
        if(mp[i]%2)
        {
            odds++;
            oddi=i;
        }

    }
    if(odds>1)
    {
    cout<<"NO SOLUTION"<<'\n';
    return;
    }
    for(int i=0;i<=25;i++)
    {
        if(mp[i]%2==0)
        {
            int half=mp[i]/2;
            mp[i]-=half;
            while(half--)
            {
                cout<<(char)('A'+i);
            }
        }
    }
    if(oddi!=-1)
    {
        while(mp[oddi]--)
        {
            cout<<(char)('A'+oddi);
        }
    }
    for(int i=25;i>=0;i--)
    {
        while(mp[i]>0)
        {
            mp[i]--;
            cout<<(char)('A'+i);
        }
    }
    cout<<'\n';
}
int main()
{
    int t=1;
    while(t--)
    solve();
}
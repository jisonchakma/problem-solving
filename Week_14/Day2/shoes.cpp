#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin>>n;
    vector<int>s(n);
    vector<int>ans;
    int b[n+3];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        b[i]=i+1;
    }
    int is_find=0;
    map<int,int>mp;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])
        {
            ans.push_back(b[i+1]);
            swap(b[i],b[i+1]);
            mp[i]++;
            mp[i+1]++;
        }
        else
        {
            if(mp[i]!=0)
            ans.push_back(b[i]);
            else
            {
                is_find=1;
                break;
            }
        }

    }
    if(mp[n-1]!=0)
    ans.push_back(b[n-1]);
    else
    is_find=1;
    if(is_find==1)
    cout<<-1<<'\n';
    else
    {
        for(auto val:ans)
        cout<<val<<" ";
        cout<<'\n';
    }

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int k,n,m;
    cin>>k>>n>>m;
    int pos1=0,pos2=0;
    vector<int>a(n),b(m);
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<m;i++)
    cin>>b[i];
    vector<int>ans;
    bool is_find=true;
    while(pos1!=n or pos2!=m)
    {
        if(pos1!=n&&a[pos1]==0)
        {
            ans.push_back(0);
            k++;
            pos1++;
        }
        else if(pos2!=m&&b[pos2]==0)
        {
            ans.push_back(0);
            k++;
            pos2++;
        }
        else if(pos1!=n&&a[pos1]<=k)
        {
            ans.push_back(a[pos1++]);
        }
        else if(pos2!=m&&b[pos2]<=k)
        {
            ans.push_back(b[pos2++]);
        }
        else
        {
            cout<<-1<<'\n';
            is_find=false;
            break;
        }
    }
    if(is_find)
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
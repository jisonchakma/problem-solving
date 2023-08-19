#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    map<int,int>tmp;
    for(int j=0;j<=32;j++)
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]&(1<<j))
            tmp[j]++;

        }
    }
    vector<int>ans;
    for(int i=1;i<=n;i++)
    {
        bool is_find=true;
        for(int j=0;j<=32;j++)
        {
            if(tmp[j]%i!=0)
            {
                is_find=false;
                break;
            }
        }
        if(is_find)
        ans.push_back(i);
    }
    sort(ans.begin(),ans.end());
    for(auto val:ans)
    cout<<val<<" ";
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
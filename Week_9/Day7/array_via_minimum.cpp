#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin>>n;
    int sz=(n*(n-1))/2;
    vector<int>a(sz);
    for(int i=0;i<sz;i++)
    cin>>a[i];
    sort(a.begin(),a.end());
    vector<int>ans;
    int idx=0;
    int lst_idx=n-1;
    while(lst_idx>0)
    {
        ans.push_back(a[idx]);
       // cout<<a[idx]<<" "<<idx<<" "<<lst_idx<<endl;
        idx+=lst_idx--;
    }
    ans.push_back(1e9);
    for(auto val:ans)
    cout<<val<<" ";
    cout<<'\n';
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n,k,x;
    cin>>n>>k>>x;
    vector<int>ans;
    for(int i=0;i<k;i++)
    {
       ans.push_back(i);
    }
    ll sum=0;
    if(n<k  or (k>x&&(k-1!=x)))
    {
        cout<<-1<<'\n';
        return;
    }
    else
    {
    for(int i=k;i<n;i++)
     {
            if(x==k)
            ans.push_back(x-1);
            else
            ans.push_back(x);
     }

    }
    for(auto val:ans)
    {
        sum+=val;
    }
    cout<<sum<<'\n';
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
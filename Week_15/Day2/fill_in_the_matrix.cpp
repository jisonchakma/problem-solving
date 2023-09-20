#include<bits/stdc++.h>
using namespace std;
int n,m;
int mex(set<int>&st)
{
    for(int i=0;;i++)
    {
        if(st.find(i)==st.end())
        return i;
    }
}
int grid_mex(vector<vector<int>>&a)
{
    set<int>final;
    for(int i=0;i<m;i++)
    {
        set<int>st;
        for(int j=0;j<n;j++)
        {
            st.insert(a[j][i]);
        }
        final.insert(mex(st));

    }
    return mex(final);
}
void right_shift(vector<int>&a,int x)
{
    deque<int>b(a.begin(),a.end());
    for(int i=0;i<x;i++)
        {
            b.push_front(b.back());
            b.pop_back();
        }
    a=vector<int>(b.begin(),b.end());
}
void solve()
{
    cin>>n>>m;
    vector<vector<int>>a(n,vector<int>(m));
    vector<int>prem;
    for(int i=0;i<m;i++)
    {
        prem.push_back(i);
    }
    for(int i=0;i<n;i++)
    {
        a[i]=prem;
    }
    if(m>1)
    {
        int x=1;
        for(int i=0;i<n;i++)
        {
            right_shift(a[i],x);
            if(x==m-1)
            continue;
            x++;
        }
    }
    cout<<grid_mex(a)<<'\n';
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<'\n';
    }
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
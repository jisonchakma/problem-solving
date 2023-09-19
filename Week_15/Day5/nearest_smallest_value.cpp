#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    stack<pair<int,int>>st;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    {
        while(st.size()>0&&st.top().first>=a[i]);
        st.pop();
        if(st.size()>0)
        cout<<st.top().second<<" ";
        else
        cout<<0<<" ";
        st.push({a[i],i+1});
    }
    return 0;
}
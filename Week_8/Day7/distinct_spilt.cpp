#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int>prefix(n,0),suffix(n,0);
    set<char>st;
    for(int i=0;i<n;i++)
    {
        st.insert(s[i]);
        prefix[i]=st.size();
    }
    st.clear();
    for(int i=n-1;i>=0;i--)
    {
        st.insert(s[i]);
        suffix[i]=st.size();
    }
    int ans=0;
    for(int i=0;i<n-1;i++)
    {
       ans=max(ans,prefix[i]+suffix[i+1]);
    }
    cout<<ans<<endl;
}
int main()
{
    Faster;
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
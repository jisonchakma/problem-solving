#include<bits/stdc++.h>
using namespace std;
int mini(string s1,string s2)
{
    int cnt=0;
    int n=s1.size();
    for(int i=0;i<n;i++)
    {
        cnt+=abs(s1[i]-s2[i]);
    }
    return cnt;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        string s[n];
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        int ans=INT_MAX;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                ans=min(ans,mini(s[i],s[j]));
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
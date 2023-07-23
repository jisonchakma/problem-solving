#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
   // sort(a.begin(),a.end());
    int ans=INT_MAX;
    for(int i=0;i<n;i++)
    {
        int tmp_ans=0;
        for(int j:{i-1,i+1})
        {
            if(j<0 or j>=n)
            continue;
            tmp_ans=max(tmp_ans,abs(a[i]-a[j]));

        }
        ans=min(ans,tmp_ans);
    }
    cout<<ans<<endl;

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
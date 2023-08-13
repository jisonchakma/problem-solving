#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin>>n;
    int cnt1=0,cnt2=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x==0)
        cnt1++;
        if(x==1)
        cnt2++;
    }
    cout<<(1ll<<cnt1)*(ll)cnt2<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
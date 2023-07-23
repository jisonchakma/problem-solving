#include<bits/stdc++.h>
using namespace std;
int count(int n)
{
    int cnt=0;
    while(n)
    {
          cnt+=(n&1);
          n>>=1;
    }
    return cnt;
}
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int a[m+1];
    for(int i=0;i<=m;i++)
    {
        cin>>a[i];
    }
    int ans=0;
    for(int i=0;i<m;i++)
    {
        if(count(a[i]^a[m])<=k)
        {
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;

}
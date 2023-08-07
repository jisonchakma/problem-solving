#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,a,b;
    cin>>n>>a>>b;
    vector<bool>visited(n,false);
    if(a+b>n)
    {
        int cnt=0;
        for(int i=a;i<=n;i++)
        {
            if(i==b)
            continue;
            if(!visited[i])
            {
            cout<<i<<" ";
            visited[i]=true;
            cnt++;
            if(cnt==n/2)
            {
                break;
            }
            }
        }
        for(int i=b;i>=1;i--)
        {
        if(i==a)
        continue;
        if(!visited[i])
        {
        cout<<i<<" ";
        visited[i]=true;
        }
        }
        cout<<endl;
    }
    else
    cout<<-1<<endl;
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
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    bool is_find=true;
    int cnt=1;
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            if(i>0&&a[i-1]==1)
            cnt+=5;
            else
            cnt++;
        }
        else
        {
            if(i>0&&a[i-1]==0)
            {
                cnt=-1;
                break;
            }
        }
    }
    cout<<cnt<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;

}
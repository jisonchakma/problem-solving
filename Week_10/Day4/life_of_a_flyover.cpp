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
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0&&a[i+1]==0&&i>-1&&i+1<n)
        {
            is_find=false;
            break;
        }
        if(a[i]==1&&a[i+1]==1&&i>-1&&i+1<n)
        {
            cnt+=5;
        }
        else
        cnt++;
        
    }
    if(is_find==false)
    cout<<-1<<endl;
    else
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
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    int mx=0;
    int idx=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>mx)
        {
            mx=a[i];
            idx=i;
        }
    }
    bool is_find=true;
    for(int i=idx+1;i<n;i++)
    {
        if(a[i]>a[i-1])
        {
            is_find=false;
            break;
        }
    }
    for(int i=idx-1;i>=0;i--)
    {
         if(a[i]>a[i+1])
         {
            is_find=false;
            break;
         }     
    }
    if(is_find==true)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
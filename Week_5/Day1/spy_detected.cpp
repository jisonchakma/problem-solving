#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    map<int,int>mp;
    vector<int>a(n);
    int j=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
        if(mp[a[i]]>1)
        {
            j=a[i];

        }

    }
    for(int i=0;i<n;i++)
    {
        if(a[i]!=j)
        {
            cout<<i+1<<endl;
            break;
        }
    }

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
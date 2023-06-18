#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        int x;
        string s;
        cin>>x>>s;
        for(auto c:s)
        {
            if(c=='D')
            {
            a[i]++;
            if(a[i]==10)
            a[i]=0;
            }
            else
            a[i]--;
            if(a[i]==-1)
            a[i]=9;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    }
    return 0;
}
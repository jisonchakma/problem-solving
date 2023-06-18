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
        map<int,int>freq;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            freq[a[i]]++;
        }
        int op=0;
        for(auto i:freq)
        {
            op+=(i.second-1);
        }
        int ans=n-op;
        if(op%2!=0)
        {
            cout<<ans-1<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
    }
    return 0;
}
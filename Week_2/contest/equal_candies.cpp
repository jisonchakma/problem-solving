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
        int mn=INT_MAX;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            mn=min(mn,a[i]);
        }
        for(int i=0;i<n;i++)
        {
            sum+=abs(a[i]-mn);
        }
        cout<<sum<<endl;
    }
    return 0;
}
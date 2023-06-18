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
        int mn=INT_MAX;
        vector<int>a;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            a.push_back(x);
            mn=min(x,mn);
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            count+=abs(a[i]-mn);
        }
        cout<<count<<endl;

    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n+1);
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        ll sum=0;
        ll mn=INT_MAX;
        for(int i=1;i<=n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                sum+=a[i]+a[j]+j-i;
                mn=min(mn,sum);
                sum=0;
            }
        }
        cout<<mn<<endl;
    }
    return 0;

}
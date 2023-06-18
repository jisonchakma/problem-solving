#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int q;
    cin>>q;
    int sum=0;
    while(q--)
    {
        int x,y;
        cin>>x>>y;
        for(int i=x;i<=y;i++)
        {
            sum+=a[i];
        }
        cout<<sum<<endl;
        sum=0;
    }
   // cout<<sum<<endl;
}
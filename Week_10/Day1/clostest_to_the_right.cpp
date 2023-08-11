#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    while(q--)
    {
        int x;
        cin>>x;
        auto it=lower_bound(a.begin(),a.end(),x);
        int idx=it-a.begin();
        if(idx==n)
        cout<<n+1<<endl;
        else
        cout<<idx+1<<endl;
    }
    return 0;
}
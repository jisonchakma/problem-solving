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
        auto it=upper_bound(a.begin(),a.end(),x);
        int idx=it-a.begin();
        cout<<idx<<endl;
    }
    return 0;
}
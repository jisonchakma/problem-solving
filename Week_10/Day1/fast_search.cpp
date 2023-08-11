#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    cin>>q;
    sort(a.begin(),a.end());
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        auto it=lower_bound(a.begin(),a.end(),l);
        int idx1=it-a.begin();
        auto it2=upper_bound(a.begin(),a.end(),r);
        int idx2=it2-a.begin();
        cout<<abs(idx2-idx1)<<" ";
    }
    cout<<endl;
    return 0;
}
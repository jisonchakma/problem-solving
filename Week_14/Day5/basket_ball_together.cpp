#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,d;
    cin>>n>>d;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a.begin(),a.end());
    int l=0,r=n-1;
    int ans=0,cur=0;
    while(l<=r)
    {
        cur=a[r];
        while(l<r&&cur<=d)
        {
            l++;
            cur+=a[r];
        }
        if(cur>d)
        {
            ans++;
            r--;
            cur=0;
        }
        else
        break;


    }
    cout<<ans<<'\n';
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin>>n;
    vector<int>a(1000006);
    int idx=1;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        while(x--)
        {
            a[idx]=i;
            idx++;
        }
    }
    int q;
    cin>>q;
    while(q--)
    {
        int y;
        cin>>y;
        cout<<a[y]<<'\n';
    }
    return 0;
}

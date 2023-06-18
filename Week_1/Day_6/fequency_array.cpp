#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>a(n+5);
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int freq[100005]={0};
    for(int i=1;i<=n;i++)
    {
        freq[a[i]]++;
    }
    for(int i=1;i<=m;i++)
    {
        cout<<freq[i]<<"\n";
    }
    return 0;
}
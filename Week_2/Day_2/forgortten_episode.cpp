#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=1;i<=n-1;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(int i=1;i<=n;i++)
    {
        if(a[i]!=(i))
        {
            cout<<i<<endl;
            break;
        }
    }
    return 0;


}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    int odd=0;
    int even=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]&1)
        odd++;
        else
        even++;
    }
    if(odd&1)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
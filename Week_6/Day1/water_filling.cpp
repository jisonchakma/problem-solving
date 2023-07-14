#include<bits/stdc++.h>
using namespace std;
void solve()
{
    vector<int>a(3);
    int cnt=0;
    for(int i=0;i<3;i++)
    {
        cin>>a[i];
        if(a[i]==0)
        {
            cnt++;
        }
    }
    if(cnt>=2)
    {
        cout<<"Water filling time"<<endl;
    }
    else
    cout<<"Not now"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
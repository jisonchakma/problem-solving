#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    int cnt_alic=0;
    int cnt_bob=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        cnt_alic++;
        else
        cnt_bob++;
    }
    if((cnt_alic+2*cnt_bob)%2!=0)
    cout<<"NO"<<endl;
    else
    {
        int sum=(cnt_alic+2*cnt_bob)/2;
        if(sum%2==0||(sum%2==1&&cnt_alic!=0))
        {
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;

    }
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
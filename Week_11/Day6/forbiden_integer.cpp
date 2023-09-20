#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k,x;
    cin>>n>>k>>x;
    if(k==1&&x==1)
    cout<<"NO"<<endl;
    else if(n%2!=0&&k==2&&x==1)
    cout<<"NO"<<endl;
    else if(n%2!=0&&x==1)
    {
        cout<<"YES"<<'\n';
        cout<<(n/2)<<'\n';
        for(int i=0;i<(n/2)-1;i++)
        cout<<2<<" ";
        cout<<3<<'\n';
    }
    else if(n%2==0&&x==1)
    {
        cout<<"YES"<<endl;
        int x=n/2;
        cout<<x<<endl;
        while(x--)
        {
            cout<<2<<" ";
        }
        cout<<'\n';
    }
    else
    {
        cout<<"YES"<<endl;
        cout<<n<<endl;
        while(n--)
        {
            cout<<1<<" ";
        }
        cout<<endl;
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
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    if((n/2)%2==0)
    {
        cout<<"YES"<<"\n";
        for(int i=2;i<=n;i+=2)
        {
            cout<<i<<" ";

        }
        int j=1;
        for(int i=1;i<n/2;i++)
        {
          cout<<j<<" ";
         //cout<<i<<" ";
         j+=2;
        }
        cout<<j+n/2<<endl;


    }
    else cout<<"NO"<<endl;


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
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e6;
void solve()
{
    ll x;
    cin>>x;
    if(x==1)
    cout<<-1<<endl;
    else
    {
    if(x<=N)
    cout<<1<<" "<<1<<" "<<x-1<<endl;
    else if(x>N&&(x%N!=0))
    {
      cout<<N<<" "<<x/N<<" "<<x%N<<endl;
    }
    else
    cout<<N<<" "<<(x/N)-1<<" "<<N<<endl;
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
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  MOD 1000000007;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        n+=n;
        ll f=1;
        for(int i=3;i<=n;i++)
        {
            f*=i;
            f%=MOD;
        }
        cout<<f<<endl;

    }
    return 0;
}
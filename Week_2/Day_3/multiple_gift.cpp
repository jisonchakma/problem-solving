#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll x,y;
    cin>>x>>y;
    ll count=0;
    for(ll i=0;i<=log2(18);i++)
    {
        if(x*i<=y)
        {
            
           count++;
           i=x*i;
        }
    }
    cout<<count<<endl;
    return 0;

}
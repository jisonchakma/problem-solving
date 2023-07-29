#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int b,c,h;
    cin>>b>>c>>h;
    int b1=2*b-1;
    int b2=2*(c+h)+1;
    cout<<min(b1,b2)<<endl;
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
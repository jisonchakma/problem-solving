#include<bits/stdc++.h>
using namespace std;
void solve()
 {
    int l,r;
    cin>>l>>r;
    for(int i=2;i*i<=r;i++)
    {
        if(r%i==0)
        {
            int a,b;
            a=i;
            b=r-i;
            cout<<a<<" "<<b<<'\n';
            return;
        }

    }
    if(l!=r&&r-3>0)
    cout<<2<<" "<<r-3<<'\n';
    else
    cout<<-1<<'\n';
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
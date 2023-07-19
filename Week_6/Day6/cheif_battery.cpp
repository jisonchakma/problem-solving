#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int mn_time=0;
    while(n!=50)
    {
        if(n>50)
        {
            n=n-3;
            mn_time++;
        }
        else
        {
            n+=2;
            mn_time++;
        }

    }
    cout<<mn_time<<endl;

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
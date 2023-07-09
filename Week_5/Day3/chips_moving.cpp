#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin>>n;
    ll cnt_o=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        cnt_o+=x& 1;
       // cout<<i<<":"<<cnt_o<<endl;
    }
    cout<<min(cnt_o,n-cnt_o);
    return 0;
}
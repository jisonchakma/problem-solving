#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll l,r;
        cin>>l>>r;
        ll sum=0;
        if(l<r)
        {
         sum=((r-l+1)*(l+r))/2;
        }
        else
        {
           sum=((l-r+1)*(l+r))/2;
        }
        cout<<sum<<endl;
        sum=0;
        
    }
    return 0;
}
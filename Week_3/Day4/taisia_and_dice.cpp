#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s,r;
        cin>>n>>s>>r;
        int val=0;
        val=s-r;
        cout<<val<<" ";
        for(int i=2;i<=n;i++)
        {
            while(r-val<n-i)
            {
                val--;

            }
            cout<<val<<" ";
            r=r-val;
        }
        cout<<endl;
    }
    return 0;
}
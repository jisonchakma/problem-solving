#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,q;
        cin>>n>>k>>q;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll c=0;
       ll ans=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]<=q)
            {
                c++;
                if(i==n-1 or a[i+1]>q)
                {
                    if(c>=k)
                    {
                        ll x=c-k+1;
                        ll add=(x*(x+1))/2;
                        ans+=add;

                        
                    }
                    c=0;
                }
            }
        }
        cout<<ans<<endl;
    }

}
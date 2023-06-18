#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n),taken;
        string ans="";
        bool broken=false;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(taken.empty())
            {
                ans+='1';
                taken.push_back(a[i]);
            }
            else
            {
                if(broken)
                {
                    if(a[i]<taken.back())
                    {
                        ans+='0';
                    }
                    else
                    {
                       if(a[i]>taken[0])
                       {
                        ans+='0';
                       }
                       else
                        {
                        ans+='1';
                        taken.push_back(a[i]);
                        }
                     }
                }
                else
                {
                    if(a[i]>=taken.back())
                    {
                        ans+='1';
                        taken.push_back(a[i]);
                    }
                    else
                    {
                        if(a[i]>taken[0])
                        {
                         ans+='0';
                        }
                        else
                        {
                        broken=true;
                        ans+='1';
                        taken.push_back(a[i]);
                        }
                    }
                }

            }
        }
        cout<<ans<<endl;

    }
    return 0;
}
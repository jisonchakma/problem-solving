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
        vector<int>a(n);
        map<int,int>feq;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            feq[a[i]]++;
        }
        bool is_find=false;
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(feq[a[i]]>=3)
            {
                count=a[i];
                is_find=true;
                break;
            }
        }
        if(is_find==true)
        {
            cout<<count<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}
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
        vector<int>a(n+1);
        map<int,int>freq;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            freq[a[i]]++;
        }
        bool is_found=false;
        int count=0;
        for(int i=1;i<=n;i++)
        {
            if(freq[a[i]]>=3)
            {
                is_found=true;
                count=a[i];
                break;
            }
    
        }
        if(is_found==true)
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
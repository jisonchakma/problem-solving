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
        for(int i=0;i<n;i++)
        cin>>a[i];
        int odd_cnt=0;
        int even_cnt=0;
        bool is_find=true;
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            if(a[i]==2)
            {
                is_find=true;
            }
            else
            {
            if(a[i]%2!=0)
            odd_cnt++;
            else
            even_cnt++;
            }
        }
        for(int i=0;i<n;i++)
        {
            mp[a[i]]++;
        }
        if(is_find)
        {
            cout<<0<<endl;

        }
        else
        {
        if(odd_cnt==n)
        {
            cout<<-1<<endl;
        }
        else if(odd_cnt<=even_cnt)
        cout<<1<<endl;
        }

    }
    return 0;
}
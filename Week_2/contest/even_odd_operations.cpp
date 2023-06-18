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
        vector<int>a;
        //1 2 1
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            a.push_back(x);
        }
        vector<int>odd;
        vector<int>even;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                even.push_back(a[i]+1);
                odd.push_back(a[i]);

            }
            else
            {
                even.push_back(a[i]);
                odd.push_back(a[i]+1);
            }
        }
        bool is_find=false;
        while(is_find=true)
        {
        for(int i=0;i<n;i++)
        {
            if(a[i]==a[i+1])
            {
                is_find=true;
            }
            else if()
            
        }
        }
        
        if(is_find==true)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
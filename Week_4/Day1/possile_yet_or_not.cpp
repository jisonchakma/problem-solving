#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int cur=-1;
        int n,b;
        cin>>n>>b;
        vector<int>a;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if((x&b)==b)
            cur&=x;
        }
        if(cur==b)
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

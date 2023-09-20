#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    bool is_find=false;
    for(int i=0;i<(1<<n);i++)
    {
        int ans=0;
        for(int j=0;j<n;j++)
        {
            if((i&(1<<j))!=0)
            ans+=a[j];
            else
            ans-=a[j];
        }
        if(ans%360==0)
        {
            is_find=true;
            break;
        }
    }
    if(is_find==true)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
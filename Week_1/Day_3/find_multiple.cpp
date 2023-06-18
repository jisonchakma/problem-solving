#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int ans=0;
    bool is_find=false;
    for(int i=1;i<=1000;i++)
    {
        ans=c*i;
        if(ans>=a&&ans<=b)
        {
            is_find=true;
            break;
        }
    }
    if(is_find)
    {
        cout<<ans<<endl;
    }
    else
    cout<<-1<<endl;
    return 0;
}
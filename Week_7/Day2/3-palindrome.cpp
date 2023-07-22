#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string ans="";
    if(n%2!=0)
    {
    for(int i=0;i<n;i++)
    {

    }
    }
    else
    {
        for(int i=0;i<n/2;i++)
        {
            if(i%2==0)
            ans+="aa";
            else
            ans+="bb";
        }
    }
    cout<<ans<<endl;
}
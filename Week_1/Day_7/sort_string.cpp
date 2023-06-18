#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    string ans="";
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>s[i+1])
        {
            char tmp=s[i+1];
            s[i+1]=s[i];
            s[i]=tmp;
            i=-1;
        }
    }
    for(int i=0;i<=s.size();i++)
    {
        ans+=s[i];
    }
    cout<<ans<<endl;
}
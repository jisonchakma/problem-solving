#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int sz=s.size();
        string m="";
        for(int i=0;i<=100;i++)
        {
            m+="Yes";
        }
        bool find=false;
        for(int i=0;i<m.size();i++)
        {
            if(i+sz-1<m.size()&&m.substr(i,sz)==s)
            {
                find=true;
                break;

            }
        }
        if(find)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}
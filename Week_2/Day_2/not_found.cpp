#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int freq[26]={0};
    int sz=s.size();
    for(int i=0;i<sz;i++)
    {
        freq[s[i]-'a']++;
    }
    string ans="";
    bool is_find=false;
   // int sz=s.size();
    for(int i=0;i<26;i++)
    {
        if(freq[i]==0)
        {
            ans+='a'+i;
            is_find=true;
            break;
        }

    }
    if(is_find==true)
    cout<<ans<<endl;
    else
    cout<<"None"<<endl;
    return 0;
}
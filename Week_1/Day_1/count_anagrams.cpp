#include<bits/stdc++.h>
using namespace std;
int main()
{
    string txt,ptr;
    cin>>txt>>ptr;
    int k=ptr.size();
    int fre1[26]={0};
    int fre2[26]={0};
    int i=0,j=0,ans=0;
    for(char c:ptr)
    {
        fre1[c-'a']++;
    }
    while(j<txt.size())
    {
        fre2[txt[j]-'a']++;
        if(j<k-1)
        {
            j++;
        }
        else
        {
            bool flag=true;
            for(int v=0;v<26;v++)
            {
                if(fre1[v]!=fre2[v])
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
            ans++;
            fre2[txt[i]-'a']--;
            i++;
            j++;
        }
    }
    cout<<ans<<endl;
}
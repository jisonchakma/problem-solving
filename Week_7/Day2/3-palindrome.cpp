#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string ans="";
    for(int i=0;i<n;i++)
    {
        ans+='a';
    }
    for(int j=2;j<n;j+=4)
    {
        ans[j]='b';
        if(j+1<n)
        ans[j+1]='b';
    }
    //7->aaaaaaa
    //   aabaaab
    //   aabbaab
    //10->aaaaaaaaaa
    //    0123456789
    //->  aabaaabaaa
    //->  aabbaabbaa
    //cout<<ans.size()<<endl;
    cout<<ans<<endl;

}
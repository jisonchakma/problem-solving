#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int sz=s2.size();
    int mn=0;
    for(int i=0;i<sz;i++)
    {
        if(s1[i]!=s2[i])
        {
            mn++;
        }
    }
    cout<<mn<<endl;
    return 0;
}
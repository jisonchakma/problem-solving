#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s="314159265358979323846264338327";
        string s1;
        cin>>s1;
        int cnt=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=s1[i])
            {
                break;
            }
            cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int sz=s.size();
    bool is_palindrome=true;
    for(int i=0;i<sz;i++)
    {
        if(sz/2>i)
        if(s[i]!=s[sz-1])
        {
            is_palindrome=false;
            break;
        }
        sz--;

    }
    if(is_palindrome)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;

}
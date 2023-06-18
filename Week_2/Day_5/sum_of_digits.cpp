#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s;
    cin>>s;
    ll count=0,x=11;
    if(s.length()<2)
    {
        cout<<0<<endl;
        return 0;
    }
    while(x>=10)
    {
        x=0;
        for(int i=0;i<s.length();i++)
        {
            x+=(s[i]-'0');
           // s=to_string(x);
            //count++;
        }
        s=to_string(x);
      //  cout<<s<<endl;
        count++;
    }
    cout<<count<<endl;
    return 0;
}
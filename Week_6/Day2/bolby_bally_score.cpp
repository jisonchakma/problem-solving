#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    char ch='A';
    int cnt_a=0,cnt_b=0;
     if(s[0]==ch)
     {
     cnt_a++;
     }
     for(int i=0;i<n;i++)
     {
     if(s[i]=='B'&&s[i+1]=='B')
     {
     cnt_b++;
     }
     else if(s[i]==ch&&s[i+1]==ch)
    {
    cnt_a++;
     }
    }
    cout<<cnt_a<<" "<<cnt_b<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
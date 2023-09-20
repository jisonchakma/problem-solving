#include<bits/stdc++.h>
using namespace std;
void solve()
{
        int n;
        cin>>n;
        string s;
        cin>>s;
       // bool is_find=true;
        int flag=0;
        int i=0;
        while(i<n &&s[i]=='m' or s[i]=='M')
        {
        i++;
        flag=1;
        }
        if(flag!=1)
        {
        cout<<"NO"<<endl;
        return ;
        }
        while(i<n &&s[i]=='e' or s[i] =='E')
        {
            flag=2;
            i++;
        }
        if(flag!=2)
        {
        cout<<"NO"<<endl;
        return;
        }
        while(i<n && s[i]=='o' or s[i]=='O')
        {
            flag=3;
            i++;
        }
        if(flag!=3)
        {
        cout<<"NO"<<endl;
        return;
        }
        while(i<n && s[i]=='w' or s[i]=='W')
        {
            i++;
            flag=4;
        }
        if(flag!=4)
        {
            cout<<"NO"<<endl;
            return;
        }
        if(i<n)
        {
            cout<<"NO"<<endl;
            return;
        }
        cout<<"YES"<<endl;
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
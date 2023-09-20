#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string a,b;
    cin>>a>>b;
    bool is_find=false;
    for(int i=0;i<a.size()-1;i++)
    {
        if(a[i]==b[i]&&a[i]=='0'&&a[i+1]==b[i+1]&&a[i+1]=='1')
        {
            is_find=true;
            break;
        }
        else
        {
            is_find=false;
        }
    }
    if(is_find)
    cout<<"YES"<<'\n';
    else
    cout<<"NO"<<'\n';

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
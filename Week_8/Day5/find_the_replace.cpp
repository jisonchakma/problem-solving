#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<pair<char,int>>ans;
    bool is_find=true;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(s[i]==s[j])
            {
                if((i%2==0)!=(j%2==0) or (i%2!=0)!=(j%2!=0))
                {
                    is_find=false;
                    break;
                }
            }
        }
    }
    if(is_find)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
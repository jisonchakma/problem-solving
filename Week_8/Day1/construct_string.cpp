#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=1;
    for(int i=0;i<n;i++)
    {
        if(s[i]==s[i+1])
        {
            cnt++;
        }
        else
        {
            if(cnt%2==0)
            {
                cout<<string(2,s[i]);
            }
            else
            cout<<s[i];
            cnt=1;
        }


    }
    cout<<endl;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
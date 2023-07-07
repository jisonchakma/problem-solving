#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string n;
    cin>>n;
    int l=n.size();
    if((n[l-1]-'0')%2==0)
    cout<<0<<endl;
    else if((n[0]-'0')%2==0)
    cout<<1<<endl;
    else
    {
        int e_cnt=0;
        for(int i=0;i<l;i++)
        {
            if((n[i]-'0')%2==0)
            {
                e_cnt++;
                break;
            }
        }
        if(e_cnt>0)
        cout<<2<<endl;
        else
        cout<<-1<<endl;
    }


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
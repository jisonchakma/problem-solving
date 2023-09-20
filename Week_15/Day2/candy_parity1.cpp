#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    ll sum=0;
    for(int i=0;i<n;i++)
    {
    cin>>a[i];
    sum+=a[i];
    }
    if(sum%n)
    {
        cout<<"No"<<'\n';
        return;
    }
    vector<int>cnt(35,0);
    ll avg=sum/n;
    for(int i=0;i<n;i++)
    {
        ll baki=a[i]-avg;
        if(baki==0)
        continue;
        int add=-1;
        int rem=-1;
        for(int y=0;y<=30;y++)
        {
            ll k=baki+(1ll<<y);
            if(k>0&&__builtin_popcountll(k)==1)
            {
                int on=__builtin_ctzll(k);
                add=y;
                rem=on;
                break;
            }
        }
        if(add==-1)
        {
            cout<<"No"<<'\n';
            return;
        }
        cnt[add]++;
        cnt[rem]--;
    }
    bool is_find=true;
    for(int i=0;i<cnt.size();i++)
    {
            if(cnt[i])
            {
                is_find=false;
                break;
            }
    }
    if(is_find)
    cout<<"Yes\n";
    else
    cout<<"No\n";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
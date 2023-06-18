#include<bits/stdc++.h>
#define ll long long int
#define pub push_back
#define pob pop_back
#define PI 3.14159265359
#define vll vector<ll>
#define All(X) (X).begin(),(X).end()
#define Unique(X) (X).erase(unique(All(X)),(X).end())
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL);
#define pi pair<ll,ll>
#define vpair vector<pair<ll,ll> >
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define cyes cout<<"Yes"<<endl
#define cno cout<<"No"<<endl
#define minus cout<<-1<<endl
#define MAX 100000
using namespace std;
vector<ll>v;
void solve()
{
        ll n;
        cin>>n;
        ll a[n];
        ll freq[35000]={0};
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            freq[a[i]]++;
        }
        ll ans=0;
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<v.size();j++)
            {
                ll k=a[i]^ v[j];
                if(k>(1<<15))
                {
                    continue;
                }
               // ll x=freq[k];
                ans+=freq[k];
             }
        }
        cout<<((ans+n)/2)<<endl;
}
bool is_palindrome(ll value)
{
    string ans=to_string(value);
    string ans1=ans;
    sort(ans1.begin(),ans1.end());
    return ans==ans1;
}

int main()
{
    for(ll i=0;i<(1<<15);i++)
    {
        if(is_palindrome(i))
        {
            v.push_back(i);
        }
    }
    ll t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}

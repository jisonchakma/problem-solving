#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        //vector<string>a(n);
        map<char,ll>fi_occurrance;
        map<char,ll>second_occurrance;
        map<string,ll>occ;
        vector<string>a(n);

        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            fi_occurrance[a[i][0]]++;
            second_occurrance[a[i][1]]++;
            occ[a[i]]++;
        }
        ll ans=0;
        for(ll i=0;i<n;i++)
        {
            ll x=max((ll)0,fi_occurrance[a[i][0]]-occ[a[i]]);
            ans+=x;
            x=max((ll)0,second_occurrance[a[i][1]]-occ[a[i]]);
            ans+=x;
            if(fi_occurrance[a[i][0]]>0)fi_occurrance[a[i][0]]--;
            if(second_occurrance[a[i][1]]>0)second_occurrance[a[i][1]]--;
            if(occ[a[i]]>0)
            occ[a[i]]--;
        }
        cout<<ans<<endl;
    }
    return 0;
}
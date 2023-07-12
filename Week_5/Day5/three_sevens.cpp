#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int m;
    cin>>m;
    map<int,int>mp;
    vector<vector<ll>> ltr(m);
    for(ll i=0;i<m; i++)
    {
        int n;
        cin>>n;
        for(int j=0;j<n;j++)
        {
            ll x; cin >> x;
            ltr[i].push_back(x);
            mp[x]++;
        }
    }
    vector<ll> ans;
    for(ll i=0; i<m; i++) {
        ll n = ltr[i].size();
        bool fnd = false;
        for(ll j=0; j<n; j++) {
            if(mp[ltr[i][j]] == 1 and !fnd) {
                fnd = true;
                ans.push_back(ltr[i][j]);
            }
            mp[ltr[i][j]]--;
        }
        if(!fnd) {
            cout << -1 << "\n";
            return;
        }
    }
    for(auto e : ans) {
        cout << e << " ";
    }
    cout << "\n";
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
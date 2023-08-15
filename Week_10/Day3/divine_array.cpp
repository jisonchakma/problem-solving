#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dbg(x) cerr << #x << " " << x << "\n";

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    vector<ll> fq(n+1, 0);
    vector<vector<ll>> ans(n+1, vector<ll>(n+1, 0LL));
    for(ll i=0; i<n; i++) {
        cin >> a[i];
        // fq[a[i]]++;
        // dbg(i)
        
    }
    ans[0] = a;
    for(ll i=1; i <= n; i++) {
        fq.assign(n+1, 0);
        // dbg(i)
        for(ll j=0; j<n; j++) {
            // dbg(j)
            ll cr = ans[i-1][j];
            fq[cr]++;
        }
        for(ll j=0; j<n; j++) {
            ans[i][j] = fq[ans[i-1][j]];
        }
    }
    ll q; cin >> q;
    while(q--) {
        ll x, k;
        cin >> x >> k;
        if(k >= n) {
            cout << ans[n][x-1] << "\n";
        } else {
            cout << ans[k][x-1] << "\n";

        }
    }
}

int main() {
    ll tcs; cin >> tcs;
    for(ll tc=1; tc<=tcs; tc++) {
        solve();
    }
}
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define dbg(x) cerr << #x << " " << x << "\n";
void solve() {
    ll n; cin >> n;
    ll mx = 63244;
    // mx=100;
    ll ans = mx;
    if(n==1) {
        cout << 0 << "\n";
        return;
    }
    for(ll i=2; i<=mx; i++) {
        ll tmp = i-1;
        tmp += (n/i)-1;
        // tmp += n%i;
        if(n%i != 0) tmp++;
        ans = min(ans, tmp);
        
    }
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int tcs; cin >> tcs;
    for(int i=1; i<=tcs; i++) {
        solve();
    }
}
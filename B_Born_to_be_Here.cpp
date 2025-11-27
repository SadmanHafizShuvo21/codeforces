#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;


void solve() {
    ll n;
    std::string s;
    std::cin >> n >> s;

    std::vector<ll> suf(n + 2, 0);
    for (int i = n - 1; i >= 0; i--) {
        suf[i] += (suf[i + 1] + (s[i] == 'Y'));
    }
    
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ans += (s[i] == 'W' ? suf[i + 1] : 0);
    }

    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    // int t;
    // std::cin >> t;
    // while(t--) {
    //     solve();
    // }
    solve();
}

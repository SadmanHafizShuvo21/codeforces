#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;

void solve() {
    ll n; 
    std::cin >> n;

    std::set<ll> s;
    for (int i = 0; i < n; i++) {
        ll x;
        std::cin >> x;
        s.insert(x);
    }

    ll ans = 0;
    while (s.count(ans)) {
        ans++;
    }
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
}
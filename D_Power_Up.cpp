// 05 March 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n, q;
    std::cin >> n >> q;
    std::set<ll> s;
    for (int i = 0; i < n; i++) {
        ll x;
        std::cin >> x;
        s.insert(x + 2);
    }

    while(q--) {
        ll x;
        std::cin >> x;
        x += 4;

        bool ok = false;
        for (ll i = 1; i * i < x; i++) {
            if (x % i == 0) {
                ll val = x / i;
                if (s.count(val) && s.count(i)) {
                    ok = true;
                    break;
                }

            }
        }
        std::cout << (ok ? "YES" : "NO") << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    // int t;
    // std::cin >> t;
    // while (t--) {
    //     solve();
    // }
    solve();
}
// 11 Feb 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> p(n), a(n), pos;
    for (int i = 0; i < n; i++) {
        std::cin >> p[i];
    }

    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        if (pos.empty() || pos.back() != a[i]) {
            pos.push_back(a[i]);
        }
    }

    ll j = 0;
    for (int i = 0; i < n && pos.size() > j; i++) {
        if (p[i] == pos[j]) {
            j++;
        }
    }

    std::cout << (pos.size() == j ? "YES" : "NO") << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    // solve();
}

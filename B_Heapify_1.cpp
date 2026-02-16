// 16 Feb 2026
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
    std::vector<ll> a(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        std::cin >> a[i];
    }
    
    for (int i = 1; i <= n / 2; i++) {
        std::vector<ll> b;
        for (int j = i; j <= n; j *= 2) {
            b.push_back(a[j]);
        }

        if (b.empty()) {
            continue;
        }
        std::sort(b.begin(), b.end());
        ll idx = 0;
        for (int j = i; j <= n; j *= 2) {
            a[j] = b[idx++];
        }
    }
    std::cout << (std::is_sorted(a.begin(), a.end()) ? "YES" : "NO") << '\n';
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


#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;

void solve() {
    ll n, d;
    std::cin >> n >> d;

    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    bool ok = true;
    std::sort(a.begin(), a.end());
    for (int i = 0; i < n; i += 2) {
        if (i + 1 < n && a[i + 1] - a[i] > d) {
            ok = false;
            break;
        }
    }
    std::cout << (ok ? "YES" : "NO") << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}
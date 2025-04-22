#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, k;
    std::cin >> n >> k;

    std::vector<ll> a(n), p(n + 1);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        p[i + 1] = p[i] + (a[i] <= k ? 1 : -1);
    }

    ll last = p[n], first = p[1], hi = p[1];
    bool hg = (first >= 0), ok = false;
    if (p[1] < 0) {
        hi = 1e18;
    }

    for (int r = 2; r < n; r++) {
        ll pr = p[r];
        if ((hg && hi <= pr) || (hg && pr <= last) || (first <= pr && pr <= last)) {
            ok = true;
            break;
        }
        first = std::min(first, pr);
        if (pr >= 0) {
            if (!hg || pr < hi) {
                hi = pr;
            }
            hg = true;
        }
    }

    std::cout << (ok ? "YES" : "NO") << "\n";
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

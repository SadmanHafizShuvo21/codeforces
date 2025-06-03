#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i < n; ++i) std::cin >> a[i];

    if (std::all_of(a.begin(), a.end(), [&](ll x) { return x == a[0]; })) {
        std::cout << 0 << '\n';
        return;
    }

    ll res = LLONG_MAX;
    for (int i = 0; i < n; ) {
        int j = i;
        while (j + 1 < n && a[j + 1] == a[i]) ++j;
        ll cost = 1LL * i * a[i] + 1LL * (n - j - 1) * a[i];
        res = std::min(res, cost);
        i = j + 1;
    }

    std::cout << res << '\n';
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

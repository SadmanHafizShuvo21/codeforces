#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n + 1);
    std::set<ll> s{0};
    for (int i = 0; i < n; i++) {
        ll x;
        std::cin >> x;
        a[i + 1] = (a[i] + (i & 1 ? x : -x));
        s.insert(a[i + 1]);
    }
    std::cout << (s.size() != n + 1 ? "YES" : "NO") << "\n";
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

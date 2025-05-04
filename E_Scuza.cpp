#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, q;
    std::cin >> n >> q;
    std::vector<ll> a(n), prefix(n + 1, 0);

    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        prefix[i + 1] = prefix[i] + a[i];
    }

    for (int i = 1; i < n; i++) {
        a[i] = std::max(a[i - 1], a[i]);
    }

    while (q--) {
        int k;
        std::cin >> k;
        std::cout << prefix[std::upper_bound(a.begin(), a.end(), k) - a.begin()] << " \n"[q == 0];
    }
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

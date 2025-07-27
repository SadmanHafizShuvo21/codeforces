#include <bits/stdc++.h>
using ll = long long;
const ll inf = 1e18;

void solve() {
    int n;
    ll c;
    std::cin >> n >> c;
    std::vector<ll> a(n), b;
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    ll ans = n;
    std::sort(a.rbegin(), a.rend());
    for(int i = 0; i < n; i++) {
        if (a[i] <= c) {
            ans--;
            c /= 2;
        }
    }
    std::cout << ans << "\n";
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

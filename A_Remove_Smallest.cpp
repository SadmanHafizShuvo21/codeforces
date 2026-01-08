#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i< n; i++) {
        std::cin >> a[i];
    }

    std::sort(a.begin(), a.end());
    for (int i = 1; i < n; i++) {
        if (std::abs(a[i] - a[i - 1]) > 1) {
            std::cout << "NO" << "\n";
            return;
        }
    }
    std::cout << "YES" << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
    // solve();
}
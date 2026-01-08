#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
void solve() {
    ll n, k;
    std::cin >> n >> k;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    if (k > 1) {
        std::cout << "YES" << "\n";
        return;
    }
    bool ok = true;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            ok = false;
            break;
        }
    }
    std::cout << (ok ? "YES" : "NO") << "\n";   
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
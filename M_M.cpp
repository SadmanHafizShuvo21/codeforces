#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;

void solve() {
    ll n, m;
    std::cin >> n >> m;
    std::vector<ll> a(n), b(m);

    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        std::cin >> b[i];
    }
    
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    
    bool ok = true;
    for (int i = 0; i < n; i++) {
        if (a[i] <= b[i]) {
            ok = false;
            break;
        }
    }
    std::cout << (ok ? "Yes" : "No") << "\n";
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
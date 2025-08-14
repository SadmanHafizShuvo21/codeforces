#include <bits/stdc++.h>
using ll = long long;
const ll inf = -1e18;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    ll m;
    std::cin >> m;
    std::vector<ll> b(m);
    for (int i = 0; i < m; i++) {
        std::cin >> b[i];
    }

    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());

    ll ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (std::abs(a[i] - b[j]) < 2) {
                b[j] = inf;
                ans++;
                break;
            }
        }
    }
    
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}

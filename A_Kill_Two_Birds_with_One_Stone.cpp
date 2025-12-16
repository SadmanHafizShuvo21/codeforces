#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n, m, r1, c1, r2, c2;
    std::cin >> n >> m >> r1 >> c1 >> r2 >> c2;

    if (n == 1 || m == 1) {
        ll d = (n == 1 ? std::abs(c1 - c2) : std::abs(r1 - r2));
        std::cout << (d & 1 ? "YES" : "NO") << "\n";
        return;
    }
    
    if (n * m % 2) {
        std::cout << (((r1 + c1) & 1) == ((r2 + c2) & 1) ? "YES" : "NO") << "\n";
        return;
    }

    std::cout << (((r1 + c1) & 1) != ((r2 + c2) & 1) ? "YES" : "NO") << "\n";
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

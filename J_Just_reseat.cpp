// 27 Feb 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n, m;
    std::cin >> n >> m;
    std::vector<std::vector<ll>> ex(n + 1);
    while(m--) {
        ll t;
        std::cin >> t;
        if (t == 1) {
            ll i, x;
            std::cin >> i >> x;
            ex[i].push_back(x);
        }
        else {
            ll i1, j1, i2, j2;
            std::cin >> i1 >> j1 >> i2 >> j2;
            std::swap(ex[i1][j1 - 1], ex[i2][j2 - 1]);
        }
    }

    for (int i = 1; i <= n; i++) {
        if (ex[i].empty()) {
            std::cout << 0 << "\n";
            continue;
        }
        
        std::cout << ex[i].size() << " ";
        for (int j = 0; j < ex[i].size(); j++) {
            std::cout << ex[i][j] << " \n"[j == ex[i].size() - 1];
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    // int t;
    // std::cin >> t;
    // while (t--) {
    //     solve();
    // }
    solve();
}
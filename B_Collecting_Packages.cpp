#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;
std::vector<std::pair<ll, ll>> pr;
void solve() {
    ll n;
    std::cin >> n;
    pr.resize(n + 1);
    for (int i = 1; i <= n; i++) {
        std::cin >> pr[i].first >> pr[i].second;
    }

    std::sort(pr.begin(), pr.end());
    for (int i = 1; i <= n; i++) {
        if (pr[i].second < pr[i - 1].second) {
            std::cout << "NO" << "\n";
            return;
        }
    }

    std::cout << "YES" << "\n";
    for (int i = 0; i < n; i++) {
        for (int j = pr[i].first; j < pr[i + 1].first; j++) {
            std::cout << 'R';
        }
        for (int j = pr[i].second; j < pr[i + 1].second; j++) {
            std::cout << 'U';
        }
    }
    std::cout << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    // solve();
}

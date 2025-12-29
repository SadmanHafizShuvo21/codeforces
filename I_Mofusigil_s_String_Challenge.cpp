#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e6 + 7;
const ll error = 1e-6;

void solve() {
    ll n, m;
    std::cin >> n >> m;
    std::string s;
    std::cin >> s;
    s.erase(std::unique(s.begin(), s.end()), s.end());
    if (m == 0) {
        std::cout << 1 << "\n";
        return;
    }
    if (m == 1) {
        std::cout << n * 25 << "\n";
        return;
    }

    ll x = n - s.size();
    std::cout << x << "\n";
    std::cout << 1 + n * 25 + n * (n - 1) * 25 * 25 / x << "\n";
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

// 14 Feb 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<std::string> s(n);
    ll m = 0;
    for (int i = 0; i < n; i++) {
        std::cin >> s[i];
        m = std::max(m, (ll)s[i].size());
    }

    for (int i = 0; i < n; i++) {
        ll p = (m - s[i].size()) / 2;
        std::string t(p, '.');
        std::cout << t + s[i] + t << '\n';
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


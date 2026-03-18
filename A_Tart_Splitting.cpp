// 16 March 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n;
    std::string s;
    std::cin >> n >> s;
    n = n * 2 + 1;
    ll pos = s.find('M');

    for (int i = 0; i < n; i++) {
        char c = s[(pos + i) % n];
        if (i == 0 && c != 'M') {
            std::cout << -1 << '\n';
            return;
        }
        if (i && ((i % 2 && c != 'I') || (!(i % 2) && c != 'T'))) {
            std::cout << -1 << '\n';
            return;
        }
    }

    std::cout << (pos == 0 ? 0 : 1) << '\n';
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
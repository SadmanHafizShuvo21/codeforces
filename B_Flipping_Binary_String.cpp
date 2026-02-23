// 23 Feb 2026
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
    std::vector<ll> a, b;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            a.push_back(i);
        }
        else {
            b.push_back(i);
        }
    }

    if (a.size() % 2 == 0) {
        std::cout << a.size() << '\n';
        for (int i = 0; i < a.size(); i++) {
            std::cout << a[i] + 1 << " \n"[i == a.size() - 1];
        }
        return;
    }

    if (b.size() % 2 == 1) {
        std::cout << b.size() << '\n';
        for (int i = 0; i < b.size(); i++) {
            std::cout << b[i] + 1 << " \n"[i == b.size() - 1];
        }
        return;
    }

    std::cout << -1 << '\n';
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
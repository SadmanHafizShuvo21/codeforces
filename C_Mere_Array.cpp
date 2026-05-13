// 13 May 2026
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
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::vector<ll> b = a;
    std::sort(b.begin(), b.end());
    ll mn = *std::min_element(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        if (a[i] % mn == 0) {
            a[i] = 0;
        }
    }
    for (int i = 0; i < n; i++) {
        if (b[i] % mn == 0) {
            b[i] = 0;
        }
    }
    std::cout << (a == b ? "YES" : "NO") << "\n";
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
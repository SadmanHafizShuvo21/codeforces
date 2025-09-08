#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;

void solve() {
    ll a, b, c;
    std::cin >> a >> b >> c;

    lld x = std::log((lld)b) - std::log((lld)a);
    lld y = std::log(((lld)c - 1) / (lld)c);

    std::cout << (ll)std::ceil(x / y) << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}

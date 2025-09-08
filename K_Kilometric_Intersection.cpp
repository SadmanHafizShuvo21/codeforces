#include <bits/stdc++.h>
using ll = long long;
using llx = __int128;

void solve() {
    ll a, b, c, d;
    std::cin >> a >> b >> c >> d;
    std::cout << std::max(0LL, std::min(b, d) - std::max(a, c)) << '\n';
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

// 07 April 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll a, b, c, d;
    std::cin >> a >> b >> c >> d;

    ll area = a * b + c * d;
    ll sq = std::sqrt(area);
    if (sq * sq == area) {
        std::cout << "SQUARE" << "\n";
        return;
    }
    std::cout << ((a == c || a == d || b == c || b == d) ? "RECTANGLE" : ":(") << "\n";
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
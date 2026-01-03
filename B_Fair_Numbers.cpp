// 03 Jan 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e6 + 7;
const ll error = 1e-6;

void solve() {
    ll n;
    std::cin >> n;

    ll temp = n;
    while (temp > 0) {
        ll rem = temp % 10;
        temp /= 10;
        if (rem > 0 && n % rem != 0) {
            n++;
            temp = n;
        }
    }
    std::cout << n << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ll t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    // solve();
}

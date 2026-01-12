#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e6 + 7;
const ll error = 1e-6;

void solve() {
    ll n, k;
    std::cin >> n >> k;

    if (n % 2 == 0) {
        std::cout << (k % n ? k % n : n) << "\n";
        return;
    }
    
    ll x = k + (k - 1) / (n / 2);
    std::cout << (x % n ? x % n : n) << "\n";
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

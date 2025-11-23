#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n, m;
    std::cin >> n >> m;

    ll k = 0, sum = 0;
    while (true) {
        if (k + 1 >= 62) {
            break;
        }
        ll x = n * ((1LL << (k + 2)) - 2); 
        if (x > m) {
            break;
        }
        k++;
    }

    sum = n * ((1LL << (k + 1)) - 2);
    ll rem = m - sum;
    if (rem < 0) {
        std::cout << -1 << "\n";
        return;
    }

    ll ans = n * k + __builtin_popcountll(rem);
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
    // solve();
}

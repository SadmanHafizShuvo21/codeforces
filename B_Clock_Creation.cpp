// 04 March 2026
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

    std::vector<ll> a;
    for (ll i = 2; i * i <= n; i++) {
        if (n  % i == 0) {
            ll x = 1;
            while(n % i == 0) {
                x *= i;
                n /= i;
            }
            a.push_back(x);
        }
    }
    if (n > 1) {
        a.push_back(n);
    }

    std::cout << a.size() << "\n";
    for (int i = 0; i < a.size(); i++) {
        std::cout << a[i] << " \n"[i == a.size() - 1];
    }
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
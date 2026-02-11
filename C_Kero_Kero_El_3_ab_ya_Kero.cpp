// 10 Feb 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n, k;
    std::cin >> n >> k;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        ll x;
        std::cin >> x;
        if (x > 0) {
            a[i] = x % k;
        }
        else {
            a[i] = k + (x % k);
        }
    }

    std::sort(a.rbegin(), a.rend());
    // for (int i = 0; i < n; i++) {
    //     std::cout << a[i] << " \n"[i == n - 1];
    // }
    ll x = 0, y = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            x += a[i];
        } 
        else {
            y += a[i];
        }
    }

    std::cout << (x > y ? "YES" : "NO") << "\n";
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

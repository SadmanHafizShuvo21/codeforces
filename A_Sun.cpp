// 20 May 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n, q;
    std::cin >> n >> q;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    while (q--) {
        ll l, r;
        std::cin >> l >> r;
        l--;

        ll sum = 0, j = 0;
        for (int i = l; i < r; i++) {
            if (j % 2) {
                sum += 2 * a[i];
            }
            else {
                sum += a[i];
            }
            j++;
        }
        std::cout << sum << '\n';
    }
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
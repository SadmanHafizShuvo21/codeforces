// 21 April 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;
const ll mod = 1e6 + 3;

void solve() {
    ll n, q;
    std::cin >> n >> q;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::vector<ll> cnt2(n), cnt5(n);
    for (int  i = 0; i < n; i++) {
        ll x = a[i];

        while(x % 2 == 0) {
            x /= 2;
            cnt2[i]++;
        }

        while(x % 5 == 0) {
            x /= 5;
            cnt5[i]++;
        }
    }
    std::vector<ll> pref2(n + 1, 0), pref5(n + 1, 0);
    for (int i = 0; i < n; i++) {
        pref2[i + 1] = pref2[i] + cnt2[i];
        pref5[i + 1] = pref5[i] + cnt5[i];
    }

    while (q--) {
        ll l, r, k;
        std::cin >> l >> r >> k;
        l--, r--;

        ll mn = std::min(pref2[r + 1] - pref2[l], pref5[r + 1] - pref5[l]);
        std::cout << (mn >= k ? "YES" : "NO") << "\n";
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
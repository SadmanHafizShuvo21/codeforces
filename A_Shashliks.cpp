#include <bits/stdc++.h>
using ll = long long;

ll check (ll &k, ll v, ll x) {
    ll res = 0;
    while(k >= v) {
        ll cnt = (k - v) / x + 1;
        res += cnt;
        k -= cnt * x;
    }
    return res;
}
void solve() {
    ll k, a, b, x, y;
    std::cin >> k >> a >> b >> x >> y;

    ll ans = 0;
    if (x > y) {
        std::swap(a, b);
        std::swap(x, y);
    }
    ans += check(k, a, x);
    ans += check(k, b, y);

    std::cout << ans << '\n';
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

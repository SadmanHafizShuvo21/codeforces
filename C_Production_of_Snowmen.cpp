#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e6 + 7;
const ll error = 1e-6;

ll check(std::vector<ll> x, std::vector<ll> y, ll n) {
    ll cnt = 0;
    for (int i = 0; i < n; i++) {
        bool ok = true;
        for (int j = 0; j < n; j++) {
            if ((x[j] >= y[(i + j) % n])) {
                ok = false;
                break;
            }
        }
        if (ok) {
            cnt++;
        }
    }
    return cnt;
}

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n), b(n), c(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        std::cin >> b[i];
    }
    for (int i = 0; i < n; i++) {
        std::cin >> c[i];
    }

    ll cnt1 = check(a, b, n);
    ll cnt2 = check(b, c, n);
    std::cout << n * cnt1 * cnt2 << '\n';
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

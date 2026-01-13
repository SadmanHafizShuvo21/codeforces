// 12 Jan 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

ll nCr(int n, int r) {
    if (r < 0 || r > n) {
        return 0;
    }
    if (r > n - r) {
        r = n - r;
    }
    ll res = 1;
    for (int i = 1; i <= r; i++) {
        res = res * (n - r + i) / i;
    }
    return res;
}

void solve() {
    ll n, k;
    std::cin >> n >> k;

    ll d = std::__lg(n), x = 0; 
    for (int i = 0; i < d; i++) {
        int lim = k - i - 1; 
        if (lim < 0) {
            continue;
        }

        if (lim >= i) {
            x += (1LL << i);
        } 
        else {
            for (int j = 0; j <= lim; j++) {
                x += nCr(i, j);
            }
        }
    }

    x += (k > d);
    std::cout << n - x << '\n';
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

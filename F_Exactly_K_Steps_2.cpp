// 14 Feb 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 105;
const ll error = 1e-6;
using Matrix = std::vector<std::vector<ll>>;

Matrix multiply(const Matrix &a, const Matrix &b, ll n) {
    Matrix c(n, std::vector<ll>(n, inf));
    for (ll i = 0; i < n; i++) {
        for (ll k = 0; k < n; k++) {
            if (a[i][k] == inf) {
                continue;
            }
            for (ll j = 0; j < n; j++) {
                if (b[k][j] == inf) {
                    continue;
                }
                c[i][j] = std::min(c[i][j], a[i][k] + b[k][j]);
            }
        }
    }
    return c;
}

Matrix power(Matrix base, ll k, ll n) {
    Matrix res(n, std::vector<ll>(n, inf));

    for (int i = 0; i < n; i++)
        res[i][i] = 0;

    while (k > 0) {
        if (k & 1){
            res = multiply(res, base, n);
        }
        base = multiply(base, base, n);
        k >>= 1;
    }
    return res;
}

void solve() {
    ll n, k;
    std::cin >> n >> k;

    Matrix c(n, std::vector<ll>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cin >> c[i][j];
        }
    }

    Matrix ans = power(c, k, n);

    for (int i = 0; i < n; i++) {
        std::cout << ans[i][i] << "\n";
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

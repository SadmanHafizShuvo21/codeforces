#include <bits/stdc++.h>
using ll = long long;

std::vector<ll> check (ll n, std::vector<ll> v) {
    std::vector<ll> fa(2 * n);
    ll len = 0;
    for (int i = 0; i < n; i++) {
        if (i > 0 && v[i] != v[i - 1]) {
            len = 0;
        }
        len++;
        fa[v[i]] = std::max(fa[v[i]], len);
    }
    return fa;
}

void solve() {
    int n;
    std::cin >> n;

    std::vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        a[i]--;
    }

    for(int i = 0; i < n; i++) {
        std::cin >> b[i];
        b[i]--;
    }

    std::vector<ll> fa = check(n, a);
    std::vector<ll> fb = check(n, b);

    ll ans = 0;
    for (int i = 0; i < 2 * n; i++) {
        ans = std::max(ans, fa[i] + fb[i]);
    }
    std::cout << ans << "\n";
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

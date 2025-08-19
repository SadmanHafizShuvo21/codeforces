#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, k, x;
    std::cin >> n >> k >> x;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::sort(a.begin(), a.end());
    for (int i = 0; i < n - 1; i++) {
        a[i] = std::max(0LL, (a[i + 1] - a[i] - 1) / x);
    }

    ll ans = n;
    std::sort(a.begin(), a.end());
    for (int i = 0; i < n - 1; i++) {
        if (k >= a[i]) {
            k -= a[i];
            ans--;
        }
    }

    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
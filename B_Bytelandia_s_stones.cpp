#include <bits/stdc++.h>
using ll = long long;
using llx = __int128;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ans += (a[i] * (i + 1) * (n - i));
    }
    std::cout << ans << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}

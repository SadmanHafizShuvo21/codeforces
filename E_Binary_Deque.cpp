#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, s;
    std::cin >> n >> s;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    ll ans = -1;
    for (ll i = 0, j = 0; i < n; i++) {
        s -= a[i];
        while(s < 0) {
            s += a[j];
            j++;
        }
        if (s == 0) {
            ans = std::max(ans,  i - j + 1);
        }
    }
    std::cout << (ans == -1 ? -1 : n - ans) << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
}

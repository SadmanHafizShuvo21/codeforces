#include <bits/stdc++.h>
using ll = long long;
using llx = __int128;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++) {
        std::cin >> a[i];
    }

    std::vector<ll> pref(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        pref[i] = (pref[i - 1] + a[i]) % 3;
    }

    for (int i = 1; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            ll x = pref[i];
            ll y = (pref[j] - pref[i] + 3) % 3;
            ll z = (pref[n] - pref[j] + 3) % 3;
            if ((x == y && y == z) || (x != y && x != z && y != z)) {
                std::cout << i << " " << j << "\n";
                return;
            }
        }
    }
    std::cout << "0 0\n";
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

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

    ll sum = std::accumulate(a.begin(), a.end(), 0LL);
    ll ans = 0;
    for (int i = 0; i < n - 1; i++) {
        ans += a[i];
        if(ans <= 0 || ans >= sum) {
            std::cout << "NO" << "\n";
            return;
        }
    }
    std::cout << "YES" << "\n";
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

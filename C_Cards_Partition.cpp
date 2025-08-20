#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, k;
    std::cin >> n >> k;
    
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    ll sum = std::accumulate(a.begin(), a.end(), 0LL);
    ll mx = *std::max_element(a.begin(), a.end());

    ll r = sum + k, ans = 0;
    for (int i = n; i >= 1; i--) {
        ll p = (sum - 1) / i + 1;
        p = std::max(p, mx) * i;

        if (r >= p) {
            ans = i;
            break;
        }
    }

    std::cout << ans << "\n";
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
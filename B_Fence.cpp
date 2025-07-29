#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, k;
    std::cin >> n >> k;
    std::vector<ll> a(n);
    
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::vector<ll>pref(n + 1, 0);
    std::partial_sum(a.begin(), a.end(), pref.begin() + 1);

    ll mx = 1e18, idx;
    for (int i = 0; i < n - k + 1; i++) {
        ll x = pref[k + i] - pref[i];
        if (mx > x) {
            mx = x;
            idx = i + 1;
        }
    }
    std::cout << idx << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}

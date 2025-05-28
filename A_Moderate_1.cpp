#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, k;
    std::cin >> n >> k;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    ll low = *std::min_element(a.begin(), a.end());
    ll high = low + k; 
    ll ans = low;

    while (low <= high) {
        ll mid = low + (high - low) / 2;
        ll cost = 0;
        for (ll h : a) {
            if (h < mid) {
                cost += mid - h; 
            }
        }
        if (cost <= k) {
            ans = mid; 
            low = mid + 1;
        } 
        else {
            high = mid - 1; 
        }
    }

    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}
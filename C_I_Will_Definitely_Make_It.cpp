#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, k;
    std::cin >> n >> k;
    k--;
    std::vector<ll> h(n);
    for (int i = 0; i < n; i++) {
        std::cin >> h[i];
    }

    ll x = h[k];
    std::sort(h.begin(), h.end());
    h.erase(std::unique(h.begin(), h.end()));
    for(int i = 0; i < h.size(); i++) {
        if(h[i] >= x && h[i + 1] - h[i] > x) {
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

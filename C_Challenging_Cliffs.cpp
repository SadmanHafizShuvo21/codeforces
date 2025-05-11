#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> h(n);
    for (int i = 0; i < n; i++) {
        std::cin >> h[i];
    }

    std::sort(h.begin(), h.end());

    if (n == 2) {
        std::cout << h[0] << " " << h[1] << "\n";
        return;
    }
    
    ll idx = 1;
    for (int i = 2; i < n; i++) {
        if (h[i] - h[i - 1] < h[idx] - h[idx - 1]) {
            idx = i;
        }
    }

    for (int i = idx; i < n; i++) {
        std::cout << h[i] << " ";
    }

    for (int i = 0; i < idx; i++) {
        std::cout << h[i] << " ";
    }
    std::cout << "\n";
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

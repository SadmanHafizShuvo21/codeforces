#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll a, b, c;
    std::cin >> a >> b >> c;
    
    std::vector<ll> v(a);
    for (int i = 0; i < a; i++) {
        std::cin >> v[i];
    }
    
    // forward elixir at start of each timestep
    std::vector<ll> cur(a);
    ll p = b;
    for (int i = 0; i < a; i++) {
        cur[i] = p;
        p -= v[i];
        p = std::min(b, p + 1);
    }
    
    // backward minimal requirement
    std::vector<ll> need(a + 1, 0);
    for (int i = a - 1; i >= 0; i--) {
        need[i] = std::max(v[i], need[i + 1] + v[i] - 1);
    }
    
    for (int i = 0; i < a; i++) {
        if (cur[i] >= need[i] + c) {
            std::cout << "YES" << "\n";
            return;
        }
    }
    std::cout << "NO" << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}

#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, x;
    std::cin >> n >> x;
    std::vector<ll> a(n);

    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::map<ll, std::pair<ll, ll>> mp;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            ll rem = x - a[i] - a[j];
            if (mp.count(rem)) {
                auto [p1, p2] = mp[rem];
                if (p1 != i && p1 != j && p2 != i && p2 != j) {
                    std::cout << p1 + 1 << ' ' << p2 + 1 << ' ' << i + 1 << ' ' << j + 1 << '\n';
                    return;
                }
            }
        }
        for (int j = 0; j < i; j++) {
            mp[a[i] + a[j]] = {j, i};
        }
    }
    
    std::cout << "IMPOSSIBLE" << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}

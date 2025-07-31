#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, m;
    std::cin >> n >> m;
    std::vector<ll>a(n, 0);

    for (int i = 0; i < n; i++) {
        ll v;
        std::cin >> v;
        if (v <= 0) {
            a.push_back(v);
        }
    }
    std::sort(a.begin(), a.end());
    
    ll x = std::accumulate(a.begin(), a.begin() + m, 0LL);

    std::cout << -x << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}

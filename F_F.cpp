#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, m;
    std::cin >> n >> m;
    std::set<ll> s;
    for (int i = 0; i < n; i++) {
        ll x; 
        std::cin >> x;
        for (int j = 0; j < x; j++) {
            ll y; 
            std::cin >> y;
            s.insert(y);
        }
    }
    std::cout << (s.size() == m ? "YES" : "NO") << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}

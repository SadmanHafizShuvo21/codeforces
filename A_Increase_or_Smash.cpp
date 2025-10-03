#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::set<ll> s;
    for (int i = 0; i < n; i++) {
        ll x;
        std::cin >> x;
        s.insert(x);
    }
    
    std::cout << 2 * s.size() - 1 << "\n";
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

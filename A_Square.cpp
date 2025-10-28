#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;

void solve() {
    std::set<ll> s;
    for(int i = 0; i < 4; i++) {
        ll x;
        std::cin >> x;
        s.insert(x);
    }
    std::cout << (s.size() == 1 ? "YES" : "NO") << "\n";
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
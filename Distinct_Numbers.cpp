#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::set<ll> s;

    for(int i = 0; i < n; i++) {
        ll a;
        std::cin >> a;
        s.insert(a);
    }
    std::cout << s.size() << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}

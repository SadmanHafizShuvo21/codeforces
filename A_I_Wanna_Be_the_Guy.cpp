#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, p, q;
    std::cin >> n;
    std::set<ll> s;

    std::cin >> p;
    for (int i = 0; i < p; i++) {
        ll a;
        std::cin >> a;
        s.insert(a);
    }
    std::cin >> q;
    for (int i = 0; i < q; i++) {
        ll a;
        std::cin >> a;
        s.insert(a);
    }
    std::cout << (n == s.size() ? "I become the guy." : "Oh, my keyboard!" )<< "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
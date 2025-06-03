#include <bits/stdc++.h>
using ll = long long;

ll find (ll x) {
    ll a = 0;
    while(x > 0) {
        x >>= 1;
        a++;
    }
    return a;
}

void solve() {
    ll x;
    std::cin >> x;
    ll b = find(x);
    std::cout << 2 * b + 1 << '\n';
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
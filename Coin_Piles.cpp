#include<bits/stdc++.h>
using ll = long long;

void solve() {
    ll a, b;
    std::cin >> a >> b;
    if (a < b) {
        std::swap(a, b);
    }
    std::cout << (((a + b) % 3 == 0 && std::min(a, b) * 2 >= std::max(a, b)) ? "YES" : "NO" )<< "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ll t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}   
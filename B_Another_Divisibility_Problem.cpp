#include <bits/stdc++.h>
using ll = long long;
using lld = double;
using llx = __int128;

void solve() {
    ll x;
    std::cin >> x;
    ll k = std::to_string(x).size();
    
    ll y = 1;
    for (int i = 0; i < k; i++) {
        y *= 10;
    }
    y -= x;
    std::cout << y << "\n";
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

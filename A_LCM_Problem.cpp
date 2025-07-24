#include<bits/stdc++.h>
using ll = long long;

void solve() {
    ll x, y;
    std::cin >> x >> y;

    ll k = y / x;
    if(k > 1) {
        std::cout << x << " " << 2 * x << "\n";
    }
    else {
        std::cout << "-1 -1" << "\n";
    }
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
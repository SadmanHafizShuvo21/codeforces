#include<bits/stdc++.h>
using ll = long long;
const ll inf = 1e18;

void solve() {
    ll c, m;
    std::cin >> c >> m;

    if (c > m) {
        std::cout << 0 << "\n";
        return;
    }
    
    if (c == m) {
        std::cout << c << "\n";
        return;
    }
    std::cout << c + 1 << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
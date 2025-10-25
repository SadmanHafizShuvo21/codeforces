#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;

void solve() {
    ll n, a, b;
    std::cin >> n >> a >> b;
    
    for (int i = n; i <= n + 6; i++) {
        if (i % 2 == a && i % 3 == b) {
            std::cout << i << "\n";
            return;
        }
    }
    std::cout << -1 << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
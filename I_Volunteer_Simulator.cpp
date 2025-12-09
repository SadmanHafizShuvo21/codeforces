#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;
ll sol[411][14] = {};
ll balon[411] = {};

void solve() {
    ll a, b, c;
    std::cin >> a >> b >> c;
    if (sol[a][b]) {
        std::cout << 0 << "\n";
        return;
    }

    sol[a][b] = true;
    if (c < 240 || balon[a] < 3) {
        balon[a]++;
        std::cout << b << "\n"; 
    } 
    else {
        std::cout << 0 << "\n"; 
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
    // solve();
}

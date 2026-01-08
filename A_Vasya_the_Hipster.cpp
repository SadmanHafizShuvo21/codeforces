#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
void solve() {
    ll n, m;
    std::cin >> n >> m;
    if (n < m) {
        std::swap(n, m);
    }
    std::cout << std::min(n, m) << " " << (n - std::min(n, m)) / 2 << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    // int t;
    // std::cin >> t;
    // while(t--) {
    //     solve();
    // }
    solve();
}
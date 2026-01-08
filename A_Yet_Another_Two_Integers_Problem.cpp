#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
void solve() {
    ll a, b;
    std::cin >> a >> b;
    if (a < b) {
        std::swap(a, b);
    }
    
    ll rem = a - b;
    // std::cout << rem << "\n";
    std::cout << (rem / 10) + (rem % 10 ? 1 : 0) << "\n";
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
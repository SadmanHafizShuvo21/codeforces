#include<bits/stdc++.h>
using ll = long long;
using lld = double;
const ll inf = 1e18;
void solve() {
    ll a, b, c;
    std::cin >> a >> b >> c;
    std::cout << ((a + c % 2) > b ? "First" : "Second") << "\n";   
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
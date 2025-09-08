#include <bits/stdc++.h>
using ll = long long;
using lld = double;
using llx = __int128;

void solve() {
    ll n; 
    std::cin >> n;

    std::cout << (n > 3 ? n - 3 : 0) << "\n";
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

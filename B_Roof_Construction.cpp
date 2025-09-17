#include <bits/stdc++.h>
using ll = long long;
using llx = __int128;

void solve() {
    ll n;
    std::cin >> n;
    
    ll k = 1;
    while(n > 2 * k) {
        k *= 2;
    }
    for (int i = k - 1; i >= 0; i--) {
        std::cout << i << " ";
    }

    for (int i = k; i < n; i++) {
        std::cout << i << " \n"[i == n - 1];
    }
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

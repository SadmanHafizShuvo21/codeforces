#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n, k;
    std::cin >> n >> k;
    ll ans = 0, zeros = 0;
    for (int i = 0; i < n; i++) {
        int a;
        std::cin >> a;
        if (a == 0) {
            zeros++;
        } 
        else {
            ans += (zeros + 1) / (k + 1);
            zeros = 0;
        }
    }
    ans += (zeros + 1) / (k + 1);

    std::cout << ans << "\n";
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

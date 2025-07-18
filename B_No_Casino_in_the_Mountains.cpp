#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n, k;
    std::cin >> n >> k;
    ll ans = 0, cnt = 0;
    for (int i = 0; i < n; i++) {
        int a;
        std::cin >> a;
        if (a == 0) {
            cnt++;
        } 
        else {
            ans += (cnt + 1) / (k + 1);
            cnt = 0;
        }
    }
    ans += (cnt + 1) / (k + 1);

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

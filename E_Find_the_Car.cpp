//24 May 2024
#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n, k, q;
    std::cin >> n >> k >> q;
    
    std::vector<int> a(k + 1);
    for (int i = 1; i <= k; i++) {
        std::cin >> a[i];
    }
    std::vector<int> b(k + 1);
    for (int i = 1; i <= k; i++) {
        std::cin >> b[i];
    }
    while (q--) {
        int d;
        std::cin >> d;
        int j = std::lower_bound(a.begin(), a.end(), d) - a.begin();
        int ans;
        if (j == 0) {
            ans = 0;
        } 
        else {
            ans = b[j - 1] + 1LL * (b[j] - b[j - 1]) * (d - a[j - 1]) / (a[j] - a[j - 1]);
        }
        std::cout << ans << " \n"[q == 0];
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
    return 0;
}

#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n, k;
    std::cin >> n >> k;
    std::string s;
    std::cin >> s;
    std::sort(s.begin(), s.end());
    int p = (k + 1) / 2;
    int m = n / k;
    std::string ans;
    for (int i = 0; i < m; i++) {
        ans += s[(i + 1) * p - 1];
    }
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

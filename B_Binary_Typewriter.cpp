#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::string s;
    std::cin >> n >> s;

    int ans = (s[0] == '1');
    for (int i = 1; i < n; i++) {
        ans += (s[i] != s[i - 1]);
    }

    if (ans > 0) {
        ans = std::max(1, ans - 2);
    }

    std::cout << n + ans << "\n";
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

#include <bits/stdc++.h>
using ll = long long;

void solve() {
    std::string s;
    std::cin >> s;
    std::vector<int> cnt(10, 0);
    for (char c : s) {
        cnt[c - '0']++;
    }
    std::string ans;
    for (int i = 0; i < 10; i++) {
        int x = 9 - i;
        for (int j = 0; j <= 9; j++) {
            if (cnt[j] && j >= x) {
                ans += j + '0';
                cnt[j]--;
                break;
            }
        }
    }
    std::cout << ans << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}

#include <bits/stdc++.h>
using ll = long long;

void solve() {
    std::string s;
    std::cin >> s;
    int n = s.size();
    std::vector<int> pref(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        pref[i] = pref[i - 1] + (s[i - 1] == '0');
    }
    
    int len = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] != '0') {
            int zeros = pref[i];
            int cur = zeros + 1;
            if (cur > len) {
                len = cur;
            }
        }
    }

    std::cout << n - len << "\n";
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

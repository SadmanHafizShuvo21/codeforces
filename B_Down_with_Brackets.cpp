#include <bits/stdc++.h>
using ll = long long;

void solve() {
    std::string s;
    std::cin >> s;

    ll cnt = 0;
    for (int i = 0; i < s.size() - 1; i++) {
        if (s[i] == '(') {
            cnt++;
        }
        else {
            cnt--;
        }
        if (cnt == 0) {
            std::cout << "YES" << "\n";
            return;
        }
    }

    std::cout << "NO" << '\n';
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

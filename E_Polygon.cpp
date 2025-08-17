#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<std::string>s(n);
    for (int i = 0; i < n; i++) {
        std::cin >> s[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - 1; j++) {
            if (s[i][j] == '1') {
                if (s[i + 1][j] == '0' && s[i][j + 1] == '0') {
                    std::cout << "NO" << "\n";
                    return;
                }
            }
        }
    }
    std::cout << "YES" << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
}

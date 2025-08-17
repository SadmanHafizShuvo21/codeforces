#include <bits/stdc++.h>
using ll = long long;

void solve() {
    std::vector<std::string>s(8);
    for (int i = 0; i < 8; i++) {
        std::cin >> s[i];
    }

    ll r = 0, c = 0;
    for (int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            if (s[i][j] == '#' && s[i][j + 2] == '#') {
                r = i;
                c = j + 2;
            }
        }
    }
    std::cout << r << " " << c << "\n";
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

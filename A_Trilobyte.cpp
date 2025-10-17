#include <bits/stdc++.h>
using ll = long long;

void solve() {
    std::string n;
    std::cin >> n;

    for (int i = 0; i < 1000; i++) {
        std::string s = n + std::to_string(i);
        int len = s.size();
        ll x = std::stoi(s.substr(std::max(0, len - 3)));
        if (x % 8 == 0) {
            std::cout << i << "\n";
            return;
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}

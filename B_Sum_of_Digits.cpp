#include <bits/stdc++.h>
using ll = long long;

void solve() {
    std::string s;
    std::cin >> s;

    if (s.size() == 1) {
        std::cout << 0 << '\n';
        return;
    }

    ll count = 0;
    while (s.size() > 1) {
        ll sum = 0;
        for (char c : s) {
            sum += c - '0';
        }
        s = std::to_string(sum);
        count++;
    }

    std::cout << count << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}

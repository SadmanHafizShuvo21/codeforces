#include <bits/stdc++.h>
using ll = long long;

void solve() {
    std::string s;
    std::cin >> s;
    int count = 0, ans = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') {
            count++;
        }
        else if (count > 0) {
            count--;
            ans++;
        }
    }
    std::cout << 2 * ans << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}

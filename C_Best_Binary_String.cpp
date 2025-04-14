#include <bits/stdc++.h>
using ll = long long;

void solve() {
    std::string s;
    std::cin >> s;
    char ch = '0';
    for (int i = 0; i < s.size(); i++) {
        if (s[i]=='?') {
            s[i] = ch;
        }
        ch = s[i];
    }
    std::cout << s << "\n";
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
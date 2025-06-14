#include <bits/stdc++.h>
using ll = long long;

void solve() {
    std::string s;
    std::cin >> s;
    
    int n = s.size();
    s[0] = (s[0] == s[n - 1] ? s[0] : s[n - 1]);
    std::cout << s << '\n';
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

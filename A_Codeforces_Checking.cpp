#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
void solve() {
    std::string s = "codeforces";
    char ch;
    std::cin >> ch;
    for (int i = 0; i < s.size(); i++) {
        if (ch == s[i]) {
            std::cout << "YES" << "\n";
            return;
        }
    }
    std::cout << "NO" << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
    // solve();
}
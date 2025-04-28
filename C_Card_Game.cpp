#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    
    std::string s;
    std::cin >> s;
    
    if (s[n - 1] == 'B') {
        if (std::count(s.begin(), s.end(), 'B') == 1) {
            std::cout << "Alice\n";
        } else {
            std::cout << "Bob\n";
        }
        return;
    }
    
    if (s[0] == 'A' || s[n - 2] == 'A') {
        std::cout << "Alice\n";
    } else {
        std::cout << "Bob\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

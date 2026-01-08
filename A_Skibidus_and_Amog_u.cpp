#include<bits/stdc++.h>
using ll = long long;

void solve() {
    std::string s;
    std::cin >> s;
    for (int i = 0; i < s.size() - 2; i++) {
        std::cout << s[i];
    }
    std::cout << "i" << "\n";
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
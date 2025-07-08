#include<bits/stdc++.h>
using ll = long long;

void solve() {
    std::string s, s1;
    std::cin >> s >> s1;

    int ans = 0;
    for (int i = 0; i < s.size(); i++) {
        for (int j = 1; j <= s.size() - i; j++) { 
            std::string sub = s.substr(i, j);
            if (s1.find(sub) != std::string::npos) { 
                ans = std::max(ans, j);
            }
        }
    }

    std::cout << s.size() + s1.size() - 2 * ans << "\n";
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
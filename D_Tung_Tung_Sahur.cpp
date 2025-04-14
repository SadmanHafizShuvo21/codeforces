#include <bits/stdc++.h>
using ll = long long;

void solve() {
    std::string p, s;
    std::cin >> p >> s;
    
    int i = 0;
    for (int l = 0, r = 0; l < p.size(); l = r) {
        if (i == s.size() || s[i] != p[l]) {
            std::cout << "NO" << "\n";
            return;
        }

        while (r < p.size() && p[l] == p[r]) {
            r++;
        }
        
        int j = i;
        while (j < s.size() && s[i] == s[j]) {
            j++;
        }
        
        if (j - i < r - l || j - i > 2 * (r - l)) {
            std::cout << "NO" << "\n";
            return;
        }
        i = j;
    }
    
    std::cout << (i == s.size() ? "YES" : "NO") << "\n";
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

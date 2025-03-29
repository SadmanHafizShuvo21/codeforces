#include <bits/stdc++.h>
using ll = long long;

void solve() {
    std::string s;
    std::cin >> s;
    int n = s.size();
    std::set<int> pos;

    for (int i = 0; i + 3 < n; i++) {
        if (s.substr(i, 4) == "1100") {
            pos.insert(i);
        }
    }
    int q;
    std::cin>>q;
    while (q--) {
        int i, v;
        std::cin >> i >> v;
        i--;
        s[i] = (v + '0');
        
        for (int j = i - 3; j <= i; j++) {
            if (j >= 0 && j + 3 < n) {
                std::string sub = s.substr(j, 4);
                if (sub == "1100") {
                    pos.insert(j);
                }
                else {
                    pos.erase(j);
                }
            }
        }
        std::cout << (pos.empty() ? "NO" : "YES") << '\n';
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
}

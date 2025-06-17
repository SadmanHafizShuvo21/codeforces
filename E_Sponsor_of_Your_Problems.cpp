#include <bits/stdc++.h>
using ll = long long;

int f(std::string s, std::string t) {
    assert(s.size() == t.size());
    int ans = 0;
    for (int i = 0; i < s.size(); i++) {
        ans += (s[i] == t[i]);
    }
    return ans;
}

void solve() {
    int l, r;
    std::cin >> l >> r;
    
    auto sl = std::to_string(l);
    auto sr = std::to_string(r);
    
    int ans = sl.size() + f(sl, sr);
    for (int i = 0; i < sl.size(); i++) {
        auto li = sl.substr(0, i + 1);
        auto ri = sr.substr(0, i + 1);
        
        int lx = sl[i] - '0';
        int rx = sr[i] - '0';
        
        for (int x = lx + 1; x <= 9 && x <= lx + 2; x++) {
            auto s = li;
            s[i] = '0' + x;
            if (s < ri) {
                ans = std::min(ans, f(s, li) + f(s, ri));
            }
        }
        for (int x = rx - 1; x >= 0 && x >= rx - 2; x--) {
            auto s = ri;
            s[i] = '0' + x;
            if (s > li) {
                ans = std::min(ans, f(s, li) + f(s, ri));
            }
        }
    }
    std::cout << ans << "\n";
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
#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
void solve() {
    std::string s;
    std::cin >> s;
    std::vector<std::string> ans;
    ll n = s.size();
    for (int i = 0; i < n; i++) {
        if (s[i] != '0') {
            std::string x;
            ans.push_back(s[i] + std::string((n - i - 1), '0'));
        }
    }

    std::cout << ans.size() << "\n";
    for (int i = 0; i < ans.size(); i++) {
        std::cout << ans[i] << " \n"[i == ans.size() - 1];
    }
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
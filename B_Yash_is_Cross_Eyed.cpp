// 08 March 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    std::string s;
    std::cin >> s;
    std::map<char, ll> mp;
    for (int i = 0; i < s.size(); i++) {
        mp[s[i]]++;
    }

    for (auto x : mp) {
        if (x.second % 2) {
            std::cout << "NO" << "\n";
            return;
        }
    }
    std::cout << "YES" << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    // solve();
}


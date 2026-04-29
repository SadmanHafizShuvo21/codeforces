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
    
    int n = s.size();
    std::map<char, int> mp;
    std::vector<bool> vis(n, false);
    for (int i = 0; i < n; i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            mp[s[i]]++;
            vis[i] = true;
        }
    }
    
    std::vector<std::pair<int, char>> v;
    for (auto &[ch, cnt] : mp) {
        v.emplace_back(cnt, ch);
    }
    std::sort(v.begin(), v.end(), [](const auto &a, const auto &b) {
        return a.first > b.first;
    });

    std::string ans = "";
    int idx = 0;
    for (int i = 0; i < n; i++) {
        if (!vis[i]) {
            ans.push_back(s[i]);
        }
        else {
            while (idx < v.size() && v[idx].first == 0) {
                idx++;
            }
            if (idx < v.size()) {
                ans.push_back(v[idx].second);
                v[idx].first--;
            }
        }
    }
    
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    // int t;
    // std::cin >> t;
    // while (t--) {
    //     solve();
    // }
    solve();
}
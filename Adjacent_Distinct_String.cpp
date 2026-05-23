// 23 Jan 2026
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

    std::vector<int> freq(26, 0);
    for (char c : s) {
        freq[c - 'a']++;
    }

    int n = s.size();
    int mx = *std::max_element(freq.begin(), freq.end());
    if (mx > (n + 1) / 2) {
        std::cout << "No\n";
        return;
    }

    std::priority_queue<std::pair<int, char>> pq;
    for (int i = 0; i < 26; i++) {
        if (freq[i]) {
            pq.push({freq[i], char('a' + i)});
        }
    }

    std::string ans;
    while (pq.size() > 1) {
        auto [f1, c1] = pq.top(); 
        pq.pop();
        auto [f2, c2] = pq.top(); 
        pq.pop();

        ans.push_back(c1);
        ans.push_back(c2);
        if (--f1) {
            pq.push({f1, c1});
        }
        if (--f2) {
            pq.push({f2, c2});
        }
    }

    if (!pq.empty()) {
        auto [f, c] = pq.top();
        if (!ans.empty() && ans.back() == c) {
            std::cout << "No\n";
            return;
        }

        while (f--) {
            ans.push_back(c);
        }
    }

    std::cout << "Yes" << "\n";
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
    // solve();
}
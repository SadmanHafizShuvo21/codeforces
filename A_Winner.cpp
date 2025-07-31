#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<std::pair<std::string, ll>> pair(n);
    std::map<std::string, int> val;

    for (int i = 0; i < n; i++) {
        std::cin >> pair[i].first >> pair[i].second;
        val[pair[i].first] += pair[i].second;
    }

    int mx = INT_MIN;
    for (auto &[a , s] : val) {
        mx = std::max(mx, s);
    }

    std::set<std::string> str;
    for (auto &[name, s] : val) {
        if (s == mx) {
            str.insert(name);
        }
    }

    std::map<std::string, int> cur;
    for (auto &[a, b] : pair) {
        cur[a] += b;
        if (cur[a] >= mx && str.count(a)) {
            std::cout << a << '\n';
            return;
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}

// 24 Feb 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;

std::map<std::string, std::vector<std::string>> mp;
std::set<std::string> vis;

void dfs(std::string &u) {
    if (vis.count(u)) {
        return;
    }

    vis.insert(u);
    for (auto &v : mp[u]) {
        dfs(v);
    }
}

void solve() {
    ll n;
    std::string s;
    std::cin >> n;
    std::vector<std::string> str;
    for (ll i = 0; i <= n; i++) {
        std::cin >> s;
        ll k;
        std::cin >> k;

        mp[s].resize(k);
        for (int j = 0; j < k; j++) {
            std::cin >> mp[s][j];
        }
        if (s == "You"){
            str = mp[s];
        }
    }

    for (auto &x : str) {
        dfs(x);
    }

    vis.erase("You");
    std::cout << vis.size() << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
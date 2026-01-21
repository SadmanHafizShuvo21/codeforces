// 20 Jan 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll error = 1e-6;

void solve() {
    ll n, m;
    std::cin >> n >> m;
    std::vector<std::pair<ll, ll>> pr;
    for (int i = 0; i < n; i++) {
        std::string s;
        std::cin >> s;
        for (int j = 0; j < m; j++) {
            if (s[j] == '.') {
                pr.push_back({i, j});
            }
        }
    }


    ll  ans= 0;
    for (int i = 0; i < pr.size(); i++) {
        std::unordered_set<std::string> dir;
        for (int j = i + 1; j < pr.size(); j++) {
            ll fi = pr[j].first - pr[i].first;
            ll sc = pr[j].second - pr[i].second;

            ll g = std::__gcd(std::abs(fi), std::abs(sc));
            fi /= g;
            sc /= g;
            dir.insert(std::to_string(fi) + '#' + std::to_string(sc));
        }
        ans += dir.size();
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
    // solve();
}

#include <bits/stdc++.h>
using ll = long long;
using lld = double;
using llx = __int128;
const lld e = 1e-12L;

void solve() {
    std::map<ll, ll> mp;
    for (ll i = 0; i < 10; i++) {
        ll x; std::cin >> x;
        mp[x]++;
    }

    std::vector<std::pair<ll, ll>> v;
    for (auto &p : mp) {
        v.push_back({p.first, p.second});
    }

    std::sort(v.begin(), v.end(), [](auto &a, auto &b) {
        if (a.second == b.second) {
            return a.first > b.first;
        }
        return a.second > b.second;
    });

    // for (auto &p : v) {
    //     std::cout << p.first << " " << p.second << "\n";
    // }
    std::cout << v[0].first << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
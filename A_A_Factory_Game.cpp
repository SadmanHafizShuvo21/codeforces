#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;

    std::map<ll, std::pair<std::set<ll>, std::set<std::pair<ll,ll>>>> mp;

    for (ll i = 0; i < n; i++) {
        ll a, b, c;
        std::cin >> a >> b >> c;
        mp[a].first.insert(b);
        mp[a].second.insert({b, c});
    }

    for (auto &p : mp) {
        std::cout << p.first << " " << p.second.first.size() << " " << p.second.second.size() << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}

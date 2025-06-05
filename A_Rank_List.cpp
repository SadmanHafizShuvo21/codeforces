#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n, k;
    std::cin >> n >> k;
    std::vector<std::pair<ll, ll>> v(n);
    std::map<std::pair<ll, ll>, ll> mp;
    for (int i = 0; i < n; i++) {
        std::cin >> v[i].first >> v[i].second;
        mp[v[i]]++;
    }

    std::sort(v.begin(), v.end(), [](auto &a, auto &b) {
        if (a.first != b.first) {
            return a.first > b.first;
        }
        return a.second < b.second;
    });
    
    std::cout << mp[v[k - 1]] << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
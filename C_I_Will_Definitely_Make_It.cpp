#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, k;
    std::cin >> n >> k;
    k--;

    std::vector<ll> h(n);
    ll mx = 0;
    for (int i = 0; i < n; i++) {
        std::cin >> h[i];
        mx = std::max(mx, h[i]);
    }

    if (h[k] == mx) {
        std::cout << "YES" << "\n";
        return;
    }

    std::map<ll, std::vector<int>> mp;
    for (int i = 0; i < n; i++) {
        mp[h[i]].push_back(i);
    }

    std::vector<char> visited(n, 0);
    std::queue<int> q;
    q.push(k);
    visited[k] = 1;

    while (!q.empty()) {
        int i = q.front();
        q.pop();

        ll lo = h[i] + 1;
        ll hi = h[i] + h[k];

        auto it = mp.lower_bound(lo);
        while (it != mp.end() && it->first <= hi) {
            for (int j : it->second) {
                if (!visited[j]) {
                    if (h[j] == mx) {
                        std::cout << "YES" << "\n";
                        return;
                    }
                    visited[j] = 1;
                    q.push(j);
                }
            }
            it = mp.erase(it); 
        }
    }

    std::cout << "NO" << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}

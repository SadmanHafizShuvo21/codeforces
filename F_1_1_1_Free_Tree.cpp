#include <bits/stdc++.h>
using ll = long long;

const int mx = 450;

void solve() {
    int n, q;
    std::cin >> n >> q;

    std::vector<int> col(n+1);
    for (int i = 1; i <= n; i++) {
        std::cin >> col[i];
    }

    std::vector<std::vector<std::pair<int,ll>>> g(n+1);
    std::vector<ll> deg(n+1, 0);
    ll cost = 0;

    for (int i = 0, u, v; i < n-1; i++) {
        ll w;
        std::cin >> u >> v >> w;
        g[u].emplace_back(v, w);
        g[v].emplace_back(u, w);
        deg[u] += w;
        deg[v] += w;
        if (col[u] != col[v]) {
            cost += w;
        }
    }

    std::vector<char> hvy(n+1, 0);
    for (int i = 1; i <= n; i++) {
        if ((int)g[i].size() > mx) {
            hvy[i] = 1;
        }
    }

    std::vector<std::unordered_map<int,ll>> cnt(n+1);
    for (int i = 1; i <= n; i++) if (hvy[i]) {
        auto &mp = cnt[i];
        for (auto &[u, w] : g[i]) {
            mp[col[u]] += w;
        }
    }

    std::vector<std::vector<std::pair<int,ll>>> hnb(n+1);
    for (int i = 1; i <= n; i++) {
        for (auto &[u, w] : g[i]) {
            if (hvy[u]) {
                hnb[i].emplace_back(u, w);
            }
        }
    }

    while (q--) {
        int v, c;
        std::cin >> v >> c;
        int oc = col[v];
        if (oc == c) {
            std::cout << cost << "\n";
            continue;
        }

        ll d = 0;
        if (hvy[v]) {
            ll tot = deg[v];
            ll s1 = cnt[v].count(oc) ? cnt[v][oc] : 0;
            ll s2 = cnt[v].count(c)  ? cnt[v][c]  : 0;
            d = (tot - s2) - (tot - s1);
        } 
        else {
            ll s1 = 0, s2 = 0;
            for (auto &[u, w] : g[v]) {
                if (col[u] != oc) {
                    s1 += w;
                }
                if (col[u] != c) {
                    s2 += w;
                }
            }
            d = s2 - s1;
        }

        cost += d;

        for (auto &[u, w] : hnb[v]) {
            auto &mp = cnt[u];
            mp[oc] -= w;
            if (mp[oc] == 0) {
                mp.erase(oc);
            }
            mp[c] += w;
        }

        col[v] = c;
        std::cout << cost << "\n";
    }
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

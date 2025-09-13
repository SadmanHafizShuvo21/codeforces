#include <bits/stdc++.h>
using ll = long long;
const ll inf = 1e9 + 7;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<std::vector<int>> a(n);
    for (int i = 0; i < n; i++) {
        ll m;
        std::cin >> m;
        a[i].resize(m);
        for (int j = 0; j < m; j++) {
            std::cin >> a[i][j];
        }
    }

    std::vector<int> p(n);
    std::iota(p.begin(), p.end(), 0);

    bool ok = true;
    std::vector<int> ans;

    while (true) {
        int mx = 0;
        for (int i : p) {
            mx = std::max(mx, (int)a[i].size());
        }

        std::vector<int> v;
        v.reserve(mx);

        for (int i = 0; i < mx; i++) {
            for (int j = n - 1; j >= 0; j--) {
                int idx = p[j];
                if (i < a[idx].size()) {
                    v.push_back(a[idx][i]);
                    break; 
                }
            }
        }

        if (ok || v < ans) {
            ans = v;
            ok = false;
        }

        if (!std::next_permutation(p.begin(), p.end())) {
            break;
        }
    }

    for (int i = 0; i < ans.size(); i++) {
        std::cout << ans[i] << " \n"[i == ans.size() - 1];
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

#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }

    std::vector<std::pair<int,int>> p;
    for (int i = 0; i < n; i++) {
        p.push_back({v[i], i});
    }
    std::sort(p.begin(), p.end());

    ll gp = 1;
    std::vector<int> ans(n);
    for (int i = 0; i < n; ) {
        int cnt = 0, val = p[i].first;
        while (cnt < val && i < n && p[i].first == val) {
            ans[p[i].second] = gp;
            cnt++;
            i++;
            if (cnt == val) {
                gp++;
                cnt = 0;
            }
        }
        if (cnt != 0) {
            std::cout << -1 << '\n';
            return;
        }
    }

    for (int i = 0; i < n; i++) {
        std::cout << ans[i] << " \n"[i == n - 1];
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

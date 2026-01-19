// 19 Jan 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll error = 1e-6;

void solve() {
    ll n, m, k;
    std::cin >> n >> m >> k;

    std::vector<ll> a(n), b(m);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        std::cin >> b[i];
    }

    std::string s;
    std::cin >> s;
    std::sort(b.begin(), b.end());
    std::vector<std::vector<int>> die(2 * k + 1);
    for (int i = 0; i < n; i++) {
        auto it = std::lower_bound(b.begin(), b.end(), a[i]);
        if (it != b.end()) {
            ll d = *it - a[i];
            if (d <= k) {
                die[d + k].push_back(i);
            }
        }
        if (it != b.begin()) {
            --it;
            ll d = *it - a[i];
            if (-d <= k) {
                die[d + k].push_back(i);
            }
        }
    }

    ll cur = 0, ans = n;
    std::vector<char> alive(n, 1);
    for (int i = 0; i < k; i++) {
        cur += (s[i] == 'L' ? -1 : 1);

        if (-k <= cur && cur <= k) {
            auto &v = die[cur + k];
            for (int idx : v) {
                if (alive[idx]) {
                    alive[idx] = 0;
                    ans--;
                }
            }
            v.clear();
        }

        std::cout << ans << " \n"[i == k - 1];
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

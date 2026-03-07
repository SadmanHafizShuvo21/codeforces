// 07 March 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n, q;
    std::cin >> n >> q;
    std::vector<ll> a(n);
    std::vector<std::pair<ll, ll>> pr(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        pr[i] = {a[i], i};
    }
    std::sort(pr.begin(), pr.end());
    ll l = std::min(n, 6LL);
    std::vector<std::pair<ll, ll>> v(pr.begin(), pr.begin() + l);

    // for (int i = 0; i < v.size(); i++) {
    //     std::cout << v[i].first << " " << v[i].second << "\n";
    // }

    while(q--) {
        ll x;
        std::cin >> x;
        std::vector<ll> b(x);
        for (int i = 0; i < x; i++) {
            std::cin >> b[i];
            b[i]--;
        }

        for (auto c : pr) {
            bool ok = false;
            for (int d : b) {
                if (d == c.second) {
                    ok = true;
                }
            }
            if (!ok) {
                std::cout << c.first << "\n";
                break;
            }
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    // int t;
    // std::cin >> t;
    // while (t--) {
    //     solve();
    // }
    solve();
}
// 13 March 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

bool ok(ll t, std::vector<ll> &k) {
    std::priority_queue<ll> pq;
    for (ll x : k) {
        std::priority_queue<ll> nxt; 
        for (int i = 0; i < x; i++) {
            ll v = t - 1;
            if (!pq.empty()) {
                v = pq.top() - 1;
                pq.pop();
                if (v < 0) {
                    return 0;
                }
            }

            nxt.push(v);
        }
        pq = std::move(nxt);
    }
    return 1;
}

void solve() {
    ll n, m;
    std::cin >> n >> m;
    std::vector<ll> a(m);

    ll sum = 0;
    for (int i = 0; i < m; i++) {
        std::cin >> a[i];
        sum += a[i];
    }

    ll l = 1, r = sum, ans = sum;
    while (l <= r) {
        ll mid = (l + r) / 2;
        if (ok(mid, a)) {
            ans = mid;
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }

    std::cout << ans << "\n";
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
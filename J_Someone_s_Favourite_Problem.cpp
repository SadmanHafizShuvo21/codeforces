// 19 Feb 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;
const ll mod = 998244353;

ll query(ll u, ll v) {
    std::cout << "? " << u << ' ' << v << std::endl;
    std::cout.flush();
    ll ans;
    std::cin >> ans;
    return ans == -1 ? 0 : ans;
}

void solve() {
    ll n;
    std::cin >> n;
    ll st = 1;

    for (int i = 2; i <= n; i++) {
        if (query(st, i)) {
            st = i;
        }
    }

    bool ok = true;
    for (int i = 1; i <= n; i++) {
        if (i == st) {
            continue;
        }
        if (query(st, i) != 0 || query(i, st) != 1) {
            ok = false;
            break;
        }
    }

    std::cout << "! " << (ok ? st : -1) << std::endl;
    std::cout.flush();
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    // solve();
}

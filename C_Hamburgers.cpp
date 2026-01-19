// 19 Jan 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll error = 1e-6;

void solve() {
    std::string str;
    std::cin >> str;

    ll nb, ns, nc, pb, ps, pc, m;
    std::cin >> nb >> ns >> nc >> pb >> ps >> pc >> m;

    ll b = 0, s = 0, c = 0;
    for (int i = 0; i < str.size(); i++) {
        b += (str[i] == 'B');
        s += (str[i] == 'S');
        c += (str[i] == 'C');
    }

    auto ispossible = [&](ll x) -> bool {
        ll money = m;
        money -= std::max(0LL, x * b - nb) * pb;
        money -= std::max(0LL, x * s - ns) * ps;
        money -= std::max(0LL, x * c - nc) * pc;
        return money >= 0;
    };

    ll l = 0, r = 1e13;
    while (l <= r) {
        ll mid = (l + r + 1) / 2;
        if (ispossible(mid)) {
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }
    std::cout << r << "\n";
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

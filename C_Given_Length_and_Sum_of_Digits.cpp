#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n, s;
    std::cin >> n >> s;
    
    if (s == 0) {
        std::cout << (n == 1 ? "0 0" : "-1 -1") << "\n";
        return;
    }

    std::string lr, sm;
    for (int i = 0; i < n; i++) {
        ll x = std::min(s, 9LL);
        lr.push_back(x + '0');
        s -= x;
    }

    if (s > 0) {
        std::cout << -1 << " " << -1 << "\n";
        return;
    }

    sm = lr;
    std::sort(sm.begin(), sm.end());

    ll chg = 0;
    while(sm[chg] == '0') {
        chg++;
    }

    // std::cout << chg << '\n';
    // std::swap(sm[0], sm[chg]);
    sm[0]++;
    sm[chg]--;
    std::cout << sm << " " << lr << "\n";
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

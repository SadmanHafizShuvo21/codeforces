// 11 March 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n;
    std::cin >> n;

    ll l = -inf, r = inf;
    for (int i = 0; i < n; i++) {
        ll a, b;
        char ch;
        std::cin >> a >> b >> ch;

        if (ch == 'A') {
            r = std::min(r, (a + b - 1) / 2);
        }
        else if (ch == 'B') {
            l = std::max(l, (a + b) / 2 + 1);
        }
        else {
            if ((a + b) % 2) {
                std::cout << "*" << "\n";
                return;
            }

            ll x = (a + b) / 2;
            l = std::max(l, x);
            r = std::min(r, x);
        }
    }

    if (l > r) {
        std::cout << "*" << "\n";
    }
    else {
        std::cout << l << " " << r << "\n";
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
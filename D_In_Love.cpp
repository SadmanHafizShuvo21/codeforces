// 29 Jan 2026
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
    std::multiset<ll> ls, lr;
    
    while(n--) {
        char ch;
        ll l, r;
        std::cin >> ch >> l >> r;
        if (ch == '+') {
            ls.insert(l);
            lr.insert(r);
        }
        else {
            ls.extract(l);
            lr.extract(r);
        }

        std::cout << ((!ls.empty() && *ls.rbegin() > *lr.begin()) ? "YES" : "NO") << "\n";
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
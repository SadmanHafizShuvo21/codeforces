// 28 Feb 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

ll check(ll n) {
    if (n == 1) {
        return 1;
    }

    ll l = n, sq = std::sqrt(n);
    for (int i = 2; i <= sq; i++) {
        if (n % i == 0) {
            l = i;
            break;
        }
    }

    while(n % l == 0) {
        n /= l;
    }
    return n == 1 ? l : -1;
}

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    if (std::is_sorted(a.begin(), a.end())) {
        std::cout << "Bob" << "\n";
        return;
    }

    bool ok = true;
    for (int i = 0; i < n; i++) {
        a[i] = check(a[i]);
        if (a[i] == -1) {
            ok = false;
            break;
        }
    }

    std::cout << (ok && std::is_sorted(a.begin(), a.end()) ? "Bob" : "Alice") << "\n"; 
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
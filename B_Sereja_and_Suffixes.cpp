// 20 Jan 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll error = 1e-6;

void solve() {
    ll n, q;
    std::cin >> n >> q;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::set<ll> s;
    std::vector<ll> pref(n, 0);
    for (int i = n - 1; i >= 0; i--) {
        s.insert(a[i]);
        pref[i] = s.size(); 
    }

    while(q--) {
        ll l;
        std::cin >> l;
        std::cout << pref[l - 1] << "\n";
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

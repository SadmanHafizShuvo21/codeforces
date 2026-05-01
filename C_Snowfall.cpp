// 01 May 2026
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
    std::vector<ll> a, b, c, d;
    for (int i = 0; i < n; i++) {
        ll x;
        std::cin >> x;
        if (x % 6 == 0) {
            a.push_back(x);
        } 
        else if (x % 3 == 0) {
            b.push_back(x);
        } 
        else if (x % 2 == 0) {
            c.push_back(x);
        } 
        else {
            d.push_back(x);
        } 
    }

    for (auto x : c) {
        a.push_back(x);
    }
    for (auto x : d) {
        a.push_back(x);
    }
    for (auto x : b) {
        a.push_back(x);
    }
    for (int i = 0; i < n; i++) {
        std::cout << a[i] << " \n"[i == n - 1];
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
    // solve();
}



#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const lld e = 1e-12L;

void solve() {
    ll n, d;
    std::cin >> n >> d;

    std::vector<ll> a(n);
    for (int i= 0; i < n; i++) {
        std::cin >> a[i];
    }
    
    std::vector<std::pair<ll, ll>> pr;
    for (ll i = 0; i < n; i++) {
        if (a[i] >= 1) {
            pr.push_back({a[i], i + 1});
        }
    }

    if (pr.empty()) {
        std::cout << -1 << "\n";
        return;
    }

    if (pr.size() == 1) {
        if (d > pr[0].first) {
            std::cout << -1 << "\n";
        } 
        else {
            for (ll i = 0; i < d; i++) {
                std::cout << pr[0].second << " \n"[i == d - 1];
            }
        }
        return;
    }

    ll k = pr.size();
    for (ll i = 0; i < d; i++) {
        std::cout << pr[i % k].second << " \n"[i == d - 1];
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}
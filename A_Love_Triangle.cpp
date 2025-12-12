#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n;
    std::cin >> n;
    std::map<ll, ll> mp;
    for (int i = 1; i <= n; i++) {
        std::cin >> mp[i];
    }

    for (int i = 1; i <= n; i++) {
        ll a = mp[i];
        ll b = mp[a];
        if (mp[b] == i) {
            std::cout << "YES" << "\n";
            return;
        }
    }
    std::cout << "NO" << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    // int t;
    // std::cin >> t;
    // while(t--) {
    //     solve();
    // }
    solve();
}

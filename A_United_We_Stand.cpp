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
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    
    ll mx = *std::max_element(a.begin(), a.end());
    ll cnt = std::count(a.begin(), a.end(), mx);

    if (cnt == n) {
        std::cout << -1 << "\n";
        return;
    }
    std::sort(a.begin(), a.end());
    std::cout << n - cnt << " " << cnt << "\n";
    for (int i = 0; i < n - cnt; i++) {
        std::cout << a[i] << " \n"[i == n - cnt - 1];
    }
    for (int i = n - cnt; i < n; i++) {
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

// 18 Jan 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e6 + 7;
const ll error = 1e-6;

void solve() {
    ll n;
    std::cin >> n;

    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::sort(a.begin(), a.end());
    a.erase(std::unique(a.begin(), a.end()), a.end());
    
    ll ans = 0, cnt = 0;
    // std::cout << a.size() << "\n";
    for (int i = 0; i < a.size(); i++) {
        if (i == 0 || a[i] == a[i - 1] + 1) {
            cnt++;
        }
        else {
            cnt = 1;
        }
        ans = std::max(ans, cnt);
    }
    // ans = std::max(ans, cnt);
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
    // solve();
}

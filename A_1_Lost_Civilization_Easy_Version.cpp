// 24 Feb 2026
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

    std::vector<ll> ans;
    for (int i = n - 1; i >= 0; i--) {
        while (!ans.empty() && ans.back() == a[i] + 1) {
            ans.pop_back();
        }
        ans.push_back(a[i]);
    }
    
    // for (int i = ans.size() - 1; i >= 0; i--) {
    //     std::cout << ans[i] << " \n"[i == 0];
    // }
    std::cout << ans.size() << '\n';
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
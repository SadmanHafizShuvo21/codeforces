#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
const ll N = 2e6 + 7;
const ll error = 1e-6;

void solve() {
    ll n;
    std::cin >> n;
    std::string ans;
    for (ll i = 1; i < n; i *= 10) {
        ll a = n - i, b = i;
        std::string s = std::to_string(a) + std::to_string(b);
        if (s.size() > ans.size() || s > ans) {
            ans = s;
        }
    }
    std::cout << ans << "\n";
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

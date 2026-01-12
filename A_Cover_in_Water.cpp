#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n;
    std::string s, str = "...";
    std::cin >> n >> s;

    if (s.find(str) != std::string::npos) {
        std::cout << 2 << "\n";
        return;
    }

    ll ans = std::count(s.begin(), s.end(), '.');
    std::cout << ans << "\n";
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


















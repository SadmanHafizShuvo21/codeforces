#include <bits/stdc++.h>
using ll = long long;
using lld = double;
using llx = __int128;

void solve() {
    ll n; 
    std::string s;
    std::cin >> n >> s;

    if (std::is_sorted(s.begin(), s.end())) {
        std::cout << 0 << "\n";
        return;
    }

    ll i = std::count(s.begin(), s.end(), '0');
    ll ans = std::count(s.begin(), s.begin() + i, '1');
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
}

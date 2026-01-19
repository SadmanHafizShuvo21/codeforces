// 18 Jan 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e6 + 7;
const ll error = 1e-6;

void solve() {
    std::string s;
    std::cin >> s;

    ll a = std::count(s.begin(), s.end(), '0');
    ll b = std::count(s.begin(), s.end(), '1');

    std::cout << (std::min(a, b) % 2 ? "DA" : "NET") << "\n";
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

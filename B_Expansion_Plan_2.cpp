#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n, a, b;
    std::cin >> n >> a >> b;

    a = std::llabs(a);
    b = std::llabs(b);

    std::string s;
    std::cin >> s;
    ll x = 0, y = 0;
    for (auto ch : s) {
        x += (ch == '4');
        y += (ch == '8');
    }

    ll ans = 0;
    ans += std::max(0LL, a - y);
    ans += std::max(0LL, b - y);
    
    std::cout << (ans <= x ? "YES" : "NO") << "\n";
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

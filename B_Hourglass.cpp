#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll s, k, m;
    std::cin >> s >> k >> m;
   
    ll div = m / k;
    ll rem = m % k;
    ll x = (s <= k ? s : (div % 2 ? k : s));
    std::cout << std::max(0LL, x - rem) << "\n";
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



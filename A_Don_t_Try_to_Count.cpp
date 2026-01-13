#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n, m;
    std::cin >> n >> m;

    std::string x, s;
    std::cin >> x >> s;

    ll ans = 0;
    while(x.find(s) == std::string::npos && (ans == 0 || x.size() <= 2 * m)) {
        x += x;
        ans++;
    }
   
    std::cout << (x.find(s) == std::string::npos ? -1 : ans) << "\n";
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


















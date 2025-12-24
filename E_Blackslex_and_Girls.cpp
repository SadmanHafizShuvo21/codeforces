#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e6 + 7;
const ll error = 1e-6;

void solve() {
    int n;
    ll x, y;
    std::cin >> n >> x >> y;
    std::string s;
    std::cin >> s;
    std::vector<ll> p(n);
    ll sumP = 0;
    for (int i = 0; i < n; ++i) {
        std::cin >> p[i];
        sumP += p[i];
    }

    ll needA = 0, needB = 0;
    for (int i = 0; i < n; ++i) {
        ll need = (p[i] / 2) + 1; // floor(p/2) + 1
        if (s[i] == '0') needA += need;
        else needB += need;
    }

    if (x >= needA && y >= needB && x + y >= sumP) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
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
}

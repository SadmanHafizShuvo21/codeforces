#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e6 + 7;
const ll error = 1e-6;

ll medal(ll n, ll p) {
    return (n * p + 99) / 100;
}
void solve() {
    ll n;
    std::cin >> n;
    std::cout << medal(n, 10) << " " << medal(n, 20) << " " << medal(n, 30) << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}

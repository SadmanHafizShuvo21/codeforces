#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;

void solve() {
    ll a, b, c, d, e, f;
    std::cin >> a >> b >> c >> d >> e >> f;
    std::cout << (a * c * e) + (a * c * f) + (a * d * e) + (a * d * f) + (b * c * e) + (b * c * f) + (b * d * e) + (b * d * f) << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;

void solve() {
    ll d;
    std::cin >> d;
    ll a, b, c, e;
    std::cin >> a >> b >> c >> e;
    a -= (lld)(c * d);
    b -= (lld)(d * e);
    if (a <= 0) {
        std::cout << 0 << "\n";
        return;
    }
    if (b <= 0) {
        std::cout << 100 << "\n";
        return;
    }
    std::cout << std::fixed << std::setprecision(13) << (lld)(a / (lld)(a + b)) * 100 << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
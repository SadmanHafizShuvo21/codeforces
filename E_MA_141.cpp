#include<bits/stdc++.h>
using ll = long long;

void solve() {
    std::vector<ll> x(4), y(4);
    for (ll i = 0; i < 4; i++) {
        std::cin >> x[i] >> y[i];
    }

    ll a = std::sqrt((x[0] - x[1]) * (x[0] - x[1]) + (y[0] - y[1]) * (y[0] - y[1]));
    ll b = std::sqrt((x[1] - x[2]) * (x[1] - x[2]) + (y[1] - y[2]) * (y[1] - y[2]));
    ll c = std::sqrt((x[2] - x[3]) * (x[2] - x[3]) + (y[2] - y[3]) * (y[2] - y[3]));
    ll d = std::sqrt((x[3] - x[0]) * (x[3] - x[0]) + (y[3] - y[0]) * (y[3] - y[0]));
    ll e = std::sqrt((x[0] - x[2]) * (x[0] - x[2]) + (y[0] - y[2]) * (y[0] - y[2]));
    ll f = std::sqrt((x[1] - x[3]) * (x[1] - x[3]) + (y[1] - y[3]) * (y[1] - y[3]));

    // std::cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << "\n";
    std::cout << (a == b && b == c && c ==  d && e == f ? "SIM" : "NAO") << "\n";

}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
void solve() {
    ll n, k, l, c, d, p, nl, np;
    std::cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    
    ll avg_drink = (k * l) / nl;
    ll lime = c * d;
    ll salt = p / np;
    
    std::cout << std::min({avg_drink, lime, salt}) / n << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    // int t;
    // std::cin >> t;
    // while(t--) {
    //     solve();
    // }
    solve();
}
#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
void solve() {
    ll n;
    std::cin >> n;
    ll x = 0, y = 0;
    while(n--) {
        ll a, b;
        std::cin >> a >> b;
        x += (a > b);
        y += (a < b);
    }
    std::cout << (x >= y ? (x != y ? "Mishka" : "Friendship is magic!^^") : "Chris") << "\n";   
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
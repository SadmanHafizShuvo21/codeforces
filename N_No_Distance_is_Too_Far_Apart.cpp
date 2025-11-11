#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;

void solve() {
    ll n, a, b;
    std::cin >> n >> a >> b;

    a = n - a - 1;
    std::cout << std::abs(a - b) - 1 << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    // int t;
    // std::cin >> t;
    // while(t--) {
    //     solve();
    // }
}
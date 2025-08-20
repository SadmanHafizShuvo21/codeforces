#include <bits/stdc++.h>
using ll = long long;

ll sum (ll n) {
    return n * (n - 1) / 2;
}
void solve() {
    ll n, x, t;
    std::cin >> n >> x >> t;
    ll a = t / x;
    std::cout << (a >= n ? sum(n) : (sum(a) + a * (n - a))) << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
}
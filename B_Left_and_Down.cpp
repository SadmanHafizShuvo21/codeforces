#include<bits/stdc++.h>
using ll = long long;

void solve() {
    ll a, b, k;
    std::cin >> a >> b >> k;
    ll gcd = std::gcd(a, b);
    ll x = a / gcd;
    ll y = b / gcd;
    std::cout << (x <= k && y <= k ? 1 : 2) << "\n";
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
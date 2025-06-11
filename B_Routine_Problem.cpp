#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll a, b, c, d;
    std::cin >> a >> b >> c >> d;
    
    if (a * d < b * c) {
        std::swap(a, b);
        std::swap(c, d);
    }

    ll p = a * d - b * c;
    ll q = a * d;
    ll g = std::__gcd(p, q);
    
    std::cout << p / g << "/" << q / g << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}

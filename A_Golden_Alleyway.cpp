#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;

void solve() {
    ll n, a, b, c;
    std::cin >> n >> a >> b >> c;
    
    ll m = (a * 7500) + (b * 3000) + (c * 1500);
    std::cout << m / n << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
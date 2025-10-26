#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;

void solve() {
    ll n;
    std::cin >> n;
    if (n == 0) {
        std::cout << -999 << " " << 999 << "\n";
        return;
    }
    if (n == 1 || n == -1) {
        std::cout << n + n << " " << -n << "\n";
        return;
    }

    std::cout << n / 2 << " " << n / 2 + (n % 2) << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
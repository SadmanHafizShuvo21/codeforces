#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll a, b, c, d;
    std::cin >> a >> b >> c >> d;

    for (int i = b; i <= 10000; i += a) {
        if ((i - d) % c == 0 && i >= d) {
            std::cout << i << '\n';
            return;
        }
    }

    std::cout << -1 << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}

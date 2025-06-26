#include<bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;

    if (n % 2 == 1) {
        std::cout << -1 << "\n";
        return;
    }

    for (ll i = 1; i <= n; i += 2) {
        std::cout << i + 1 << " " << i << " \n"[i == n];
    }
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
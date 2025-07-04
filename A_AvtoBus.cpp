#include<bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;

    if (n % 2 == 1 || n < 4) {
        std::cout << -1 << '\n';
        return;
    }

    std::cout << (n + 5) / 6 << " " << n / 4 << '\n';
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
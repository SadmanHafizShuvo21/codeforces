#include <bits/stdc++.h>
using ll = long long;

bool issquare(int n) {
    int x = std::sqrt(n);
    return x * x == n;
}

void solve() {
    ll n;
    std::cin >> n;

    ll x = n / 2;
    ll sq = sqrt(x);
    ll nsq = std::sqrt(n);
    std::cout << ((n % 4 == 0 && issquare(n / 4)) || (n % 2 == 0 && issquare(n / 2)) ? "YES" : "NO") << "\n";
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

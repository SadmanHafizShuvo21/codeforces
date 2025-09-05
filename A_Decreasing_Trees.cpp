#include <bits/stdc++.h>
using ll = long long;

ll fact(ll n) {
    ll res = 1;
    for (ll i = 2; i <= n; i++) res *= i;
    return res;
}

void solve() {
    ll n;
    std::cin >> n;
    std::cout << fact(n - 1) << "\n";
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

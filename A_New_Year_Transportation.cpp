#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, t;
    std::cin >> n >> t;
    std::vector<ll> a(n - 1);

    for (int i = 0; i < n - 1; ++i) {
        std::cin >> a[i];
    }

    ll st = 1;
    while (st < t) {
        st += a[st - 1]; 
    }

    std::cout << (st == t ? "YES" : "NO") << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}

#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n, s;
    std::cin >> n >> s;
    std::vector<ll> a(n);

    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    } 

    ll sum = std::accumulate(a.begin(), a.end(), 0LL);
    if (s >= sum && s - sum != 1) {
        std::cout << -1 << '\n';
        return;
    }

    ll z = std::count(a.begin(), a.end(), 0);
    ll o = std::count(a.begin(), a.end(), 1);
    ll tw = std::count(a.begin(), a.end(), 2);

    for (int i = 0; i < z; i++) {
        std::cout << 0 << " ";
    }
    for (int i = 0; i < tw; i++) {
        std::cout << 2 << " ";
    }
    for (int i = 0; i < o; i++) {
        std::cout << 1 << " ";
    }

    std::cout << "\n";
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

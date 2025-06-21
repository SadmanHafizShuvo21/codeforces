#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    std::set<ll> s;

    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        s.insert(a[i]);
    }
    for(int i = 1; i < 1024; i++) {
        std::set<ll> s1;
        for (int x : a) {
            s1.insert(x ^ i);
        }
        if (s == s1) {
            std::cout << i << "\n";
            return;
        }
    }
    std::cout << -1 << "\n";
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

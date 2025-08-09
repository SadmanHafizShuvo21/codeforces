#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    ll mn = *std::min_element(a.begin(), a.end());

    ll cnt = 0;
    for (int i = 0; i < n; i++) {
        cnt += (a[i] == mn);
    }

    ll g = std::gcd(n, cnt);
    std::cout << cnt / g << "/" << n / g << "\n";
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

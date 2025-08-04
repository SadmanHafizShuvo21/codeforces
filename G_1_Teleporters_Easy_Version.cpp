#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, c;
    std::cin >> n >> c;
    std::vector<ll> a(n);

    for (int i = 0; i < n; i++) {
        ll x;
        std::cin >> x;
        a[i] = x + i + 1;
    }

    std::sort(a.begin(), a.end());
    
    ll cnt = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] <= c) {
            c -= a[i];
            cnt++;
        }
    }

    std::cout << cnt << "\n";
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

#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, k;
    std::cin >> n >> k;

    std::vector<ll> a(n), b(n);
    ll l = 0, r = 2*k;
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        l = std::max(l, a[i]);
        r = std::min(r, a[i]+k);
    }
    for (int i = 0; i < n; i++) {
        std::cin >> b[i];

        if(b[i] != -1){
            l = std::max(l, a[i] + b[i]);
            r = std::min(r, a[i] + b[i]);
        }
    }
    std::cout << std::max(0LL, r - l + 1)<< "\n";
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

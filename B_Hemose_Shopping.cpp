#include <bits/stdc++.h>
using ll = long long;
const ll inf = -1e18;

void solve() {
    ll n, x;
    std::cin >> n >> x;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::vector<ll> b = a;
    std::sort(b.begin(), b.end());
    ll cnt = 0;
    for (int i = n - x; i <= x - 1; i++) {
        cnt += (a[i] != b[i]);
    }
    
    std::cout << (cnt == 0 ? "YES" : "NO") << "\n";
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

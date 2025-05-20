#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }

    ll a = 0, b = 0, l = 0, r = n - 1, ans = 0;
    while (l <= r) {
        if (a <= b) {
            a += v[l++];
        } 
        else {
            b += v[r--];
        }
        
        if (a == b) {
            ans = l + (n - r - 1);
        }
    }

    std::cout << ans << '\n';
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

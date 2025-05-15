#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        ll x;
        std::cin >> x;
        a[i] -= x;
    }

    std::sort(a.begin(), a.end());

    ll ans = 0, j = n;
    for (ll i = 0; i < n; i++) {
        while (j > 0 && a[i] + a[j - 1] > 0) {
            j--;
        }
        ans += n - std::max(i + 1, j);
    }
    
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}

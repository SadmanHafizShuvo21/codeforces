#include<bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, t;
    std::cin >> n >> t;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    ll ans = 0, j = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
        if (sum <= t) {
            ans++;
        }
        else {
            sum -= a[j];
            j++;
        }
    }
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
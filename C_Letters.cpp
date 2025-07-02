#include<bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, m;
    std::cin >> n >> m;
    std::vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    ll sum = 0, i = 0;
    while (m--) {
        ll x;
        std::cin >> x;
        while (i < n && sum + a[i] < x) {
            sum += a[i];
            i++;
        }
        std::cout << i + 1 << ' ' << x - sum << '\n';
    }
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
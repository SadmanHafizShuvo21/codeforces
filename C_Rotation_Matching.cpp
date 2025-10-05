#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    
    std::vector<ll> pa(n + 1), pb(n + 1);
    for (int i = 0; i < n; i++) {
        ll x;
        std::cin >> x;
        pa[x] = i;
    }
    for (int i = 0; i < n; i++) {
        ll x;
        std::cin >> x;
        pb[x] = i;
    }

    ll ans = 0;
    std::map<ll, ll> mp;
    for (int i = 1; i <= n; i++) {
        ll x = (pa[i] - pb[i] + n) % n;
        mp[x]++;
        ans = std::max(ans, mp[x]);
    }
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}

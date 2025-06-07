#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    
    std::vector<ll> a(n);
    std::map<ll, ll> mp;
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        mp[a[i]]++;
        ans = std::max(ans,mp[a[i]]);
    }

    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
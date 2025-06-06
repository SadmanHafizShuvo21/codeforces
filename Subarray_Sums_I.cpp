#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, x;
    std::cin >> n >> x;
    
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::map<ll, ll> mp;
    mp[0] = 1;
    ll sum = 0 ,ans = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
        ans += mp[sum - x];
        mp[sum]++;
    }
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
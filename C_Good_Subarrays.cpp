#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::string s;
    std::cin >> n >> s;
    std::vector<ll> pref(n + 1);
    
    for (int i = 0; i < n; i++) {
        pref[i + 1] = pref[i] + s[i] - '1';
    }

    ll ans = 0;
    std::map<ll, ll> mp;
    for (int i = 0; i <= n; i++) {
        ans += mp[pref[i]]++;
    }
    std::cout << ans << "\n";
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
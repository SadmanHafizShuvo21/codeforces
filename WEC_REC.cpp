// 13 May 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n, x, k;
    std::cin >> n >> x >> k;
    std::vector<ll> a(n);
    std::map<ll, ll, std::greater<ll>> mp;
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        mp[a[i]]++;
    }

    ll cnt = 0, ans = 0;
    for (auto it : mp) {
        if (cnt == k) {
            break;
        }
        ans += it.second;
        cnt++;
    }
    std::cout << std::min(ans, x) << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    // solve();
}
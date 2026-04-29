// 25 April 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n, k;
    std::cin >> n >> k;
    std::map<ll, ll> mp;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        mp[a[i]]++;
    }

    std::vector<ll> b;
    for (auto x : mp) {
        ll val = x.first * x.second;
        b.push_back(val);
    }

    std::sort(b.rbegin(), b.rend());
    for (int i = 0; i < std::min(k, (ll)b.size()); i++) {
        b[i] = 0;
    }

    ll sum = std::accumulate(b.begin(), b.end(), 0LL);
    std::cout << sum << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    // int t;
    // std::cin >> t;
    // while (t--) {
    //     solve();
    // }
    solve();
}
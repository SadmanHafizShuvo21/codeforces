#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
const ll error = 1e-6;

void solve() {
    ll n;
    std::cin >> n;
    std::map<ll, ll> mp;
    for (int i = 0; i < n; i++) {
        ll a;
        std::cin >> a;
        mp[a]++;
        std::cout << (mp[a] > 1 ? a + 1 : a) << " \n"[i == n - 1];
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}

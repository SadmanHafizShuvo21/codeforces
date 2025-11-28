#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n, cnt = 0;
    std::cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        cnt += (a[i] > 0);
    }

    ll sum = std::accumulate(a.begin(), a.end(), 0LL);
    ll ans = std::min<ll>(cnt, sum - n + 1);
    std::cout << std::max(0LL, ans) << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
    // solve();
}

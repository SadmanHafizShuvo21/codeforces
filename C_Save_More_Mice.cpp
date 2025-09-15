#include <bits/stdc++.h>
using ll = long long;
const ll INF = 1e9 + 7;

void solve() {
    ll n, k;
    std::cin >> n >> k;
    std::vector<ll> a(k);
    for (int i = 0; i < k; i++) {
        ll x;
        std::cin >> x;
        a[i] = n - x;
    }
    std::sort(a.begin(), a.end());

    ll l = 0, r = n;
    while (l < k && a[l] < r) {
        r -= a[l];
        l++;
    }

    std::cout << l << '\n';
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
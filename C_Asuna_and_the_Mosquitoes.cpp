#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::vector<ll> a(n);
    bool has_even = false, has_odd = false;
    ll max_val = 0;
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        if (a[i] % 2 == 0) {
            has_even = true;
        } else {
            has_odd = true;
        }
        if (a[i] > max_val) {
            max_val = a[i];
        }
    }
    if (!has_even || !has_odd) {
        std::cout << max_val << "\n";
        return;
    }
    if (n == 2) {
        std::cout << a[0] + a[1] << "\n";
        return;
    }
    ll sum = std::accumulate(a.begin(), a.end(), 0LL);
    ll min_even = LLONG_MAX;
    ll min_odd = LLONG_MAX;
    for (ll num : a) {
        if (num % 2 == 0) {
            if (num < min_even) {
                min_even = num;
            }
        } else {
            if (num < min_odd) {
                min_odd = num;
            }
        }
    }
    if (sum % 2 == 0) {
        std::cout << sum - min_odd << "\n";
    } else {
        std::cout << sum - min_even << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

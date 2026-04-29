// 29 April 2026
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
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    ll l = 0, r = n - 1;
    while (l < r) {
        if (a[l] == a[r]) {
            l++;
            r--;
        }
        else if (a[l] == k) {
            l++;
        }
        else if (a[r] == k) {
            r--;
        }
        else {
            std::cout << "No" << "\n";
            return;
        }
    }
    std::cout << "Yes" << '\n';
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
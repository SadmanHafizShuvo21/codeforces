// 20 Jan 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll error = 1e-6;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> arr(n);
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    ll a = std::count(arr.begin(), arr.end(), 1);
    ll b = std::count(arr.begin(), arr.end(), 2);

    if (b % 2) {
        std::cout << -1 << "\n";
        return;
    }

    if (a == n) {
        std::cout << 1 << "\n";
        return;
    }

    ll cnt = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            cnt++;
        }
        if (2 * cnt == b) {
            std::cout << i + 1 << "\n";
            return;
        }
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
    // solve();
}

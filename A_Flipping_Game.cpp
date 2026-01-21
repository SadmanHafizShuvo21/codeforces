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
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    ll sum = std::count(a.begin(), a.end(), 1LL);
    ll cnt = 0, mx = -inf;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            cnt++;
        }
        else {
            cnt--;
            cnt = std::max(0LL, cnt);
        }
        // std::cout << cnt << " ";
        mx = std::max(cnt, mx);
    }
    // std::cout << sum << " " << mx << "\n";
    if (sum == n) {
        std::cout << n - 1 << "\n";
        return;
    }
    std::cout << sum + mx << "\n";
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

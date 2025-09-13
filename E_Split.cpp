#include <bits/stdc++.h>
using ll = long long;
const ll INF = 1e9 + 7;

void solve() {
    ll n,k;
    std::cin >> n >> k;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::vector<int> p(n + 1, 0);
    for (int i = 0; i < n; i++) {
        p[a[i]]++;
    }

    for (int i = 1; i <= n; i++) {
        if (p[i] % k != 0) {
            std::cout << 0 << '\n';
            return;
        }
    }
    std::vector<int> q(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        q[i] = p[i] / k;
    }

    ll l = 0, r = 0, ans = 0;
    std::vector<int> cur(n + 1, 0);
    
    while (l < n) {
        while (r < n && cur[a[r]] + 1 <= q[a[r]]) {
            cur[a[r]]++;
            r++;
        }
        ans += (r - l);
        cur[a[l]]--;
        l++;

        r = std::max(r, l);
    }

    std::cout << ans << '\n';
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

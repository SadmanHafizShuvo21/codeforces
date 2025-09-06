#include <bits/stdc++.h>
using ll = long long;
using lld = double;
using llx = __int128;
const lld e = 1e-12L;

void solve() {
    ll n, m, k;
    std::cin >> n >> m >> k;
    
    ll l = 0, r = std::max(n, m);
    while(l < r) {
        ll mid = (l + r) / 2;
        ll row = (n + 2 * mid) / (2 * mid + 1);
        ll col = (m + 2 * mid) / (2 * mid + 1);
        if (row * col <= k) {
            r = mid;
        }
        else {
            l = mid + 1;
        }
    }
    std::cout << l << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
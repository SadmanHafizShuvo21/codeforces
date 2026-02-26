// 25 Feb 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    int n, m;
    std::cin >> n >> m;
    
    std::vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        std::cin >> b[i];
    }
    
    std::vector<int> d(n + m + 1);
    for (auto x : a) {
        d[x]++;
    }
    
    for (int i = n + m; i >= 1; i--) {
        for (int j = 2 * i; j <= n + m; j += i) {
            d[j] += d[i];
        }
    }
    
    int ca = 0, cb = 0, cx = 0;
    for (auto x : b) {
        if (d[x] == n) {
            ca++;
        } else if (d[x] == 0) {
            cb++;
        } else {
            cx++;
        }
    }
    
    if (cx % 2 + ca > cb) {
        std::cout << "Alice\n";
    } else {
        std::cout << "Bob\n";
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
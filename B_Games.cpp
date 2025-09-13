#include <bits/stdc++.h>
using ll = long long;
using llx = __int128;

void solve() {
    ll n, m;
    std::cin >> n >> m;
    std::vector<ll> a(n), b(m);

    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    for (int i = 0; i < m; i++) {
        std::cin >> b[i];
    }

    ll i = 0, j = 0, same = 0;
    while (i < n && j < m) {
        if (a[i] == b[j]) { 
            same++; 
            i++; 
            j++; 
        }
        else if (a[i] < b[j]) {
            i++;
        }
        else {
            j++;
        }
    }
    
    ll x = n - same, y = m - same;
    ll ans = 2 * std::min(x, y) + 1 + (x > y);
    std::cout << ans << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
}

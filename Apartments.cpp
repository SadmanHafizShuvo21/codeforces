#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, m, k;
    std::cin >> n >> m >> k;
    std::vector<ll> a(n), b(m);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        std::cin >> b[i];
    }
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());

    ll ans = 0, i = 0, j = 0;
    while(i < n && j <m) {
        if (b[j] < a[i] - k) {
            j++;
        }
        else if (b[j] > a[i] + k) {
            i++;
        }
        else {
            ans++;
            i++;
            j++;
        }
    }

    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}
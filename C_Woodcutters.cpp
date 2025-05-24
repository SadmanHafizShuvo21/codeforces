#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;

    std::vector<std::pair<ll, ll>> pr(n);
    for (int i = 0; i < n; i++) {
        std::cin >> pr[i].first >> pr[i].second;
    }

    if (n == 1) {
        std::cout << 1 << "\n";
        return;
    }

    ll ans = 2; 
    ll last = pr[0].first;

    for (int i = 1; i < n - 1; i++) {
        ll x = pr[i].first, h = pr[i].second;

        if (x - h > last) {
            ans++;
            last = x;
        } 
        else if (x + h < pr[i + 1].first) {
            ans++;
            last = x + h;
        } 
        else {
            last = x;
        }
    }

    std::cout << ans << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}

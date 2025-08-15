#include <bits/stdc++.h>
using ll = long long;
const ll inf = -1e18;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<std::pair<ll, ll>> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i].first;
        a[i].second = i + 1;
    }

    ll cnt = 0;
    std::sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n && a[i].first * a[j].first <= 2 * n; j++) {
            if (a[i].first * a[j].first == a[i].second + a[j].second) {
                cnt++;
            }
        }
    }
    
    std::cout << cnt << "\n";
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

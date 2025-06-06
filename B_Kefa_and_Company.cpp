#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, d;
    std::cin >> n >> d;
    
    std::vector<std::pair<ll, ll>> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i].first >> v[i].second;
    }
    
    std::sort(v.begin(), v.end());
    ll ans = 0, sum = 0, j = 0;
    for (int i = 0; i < n; i++) {
        sum += v[i].second;
        while(v[i].first - v[j].first >= d) {
            sum -= v[j].second;
            j++;
        }
        ans = std::max(ans, sum);
    }
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
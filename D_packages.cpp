#include <bits/stdc++.h>
using ll = long long;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    ll n, b;
    std::cin >> n >> b;
    
    std::vector<std::pair<ll, ll>> v(n);
    for (ll i = 0; i < n; i++) std::cin >> v[i].first;
    for (ll i = 0; i < n; i++) std::cin >> v[i].second;
    
    std::sort(v.begin(), v.end(), [](auto &x, auto &y) {
        return x.second == y.second ? x.first < y.first : x.second < y.second;
    });
    
    ll lo = 0, hi = n, k = 0;
    while (lo <= hi) {
        ll mid = (lo + hi) / 2;
        std::vector<ll> c(n);
        for (ll i = 0; i < n; i++) c[i] = v[i].first + mid * v[i].second;
        std::nth_element(c.begin(), c.begin() + mid, c.end());
        ll sum = 0;
        for (ll i = 0; i < mid; i++) sum += c[i];
        if (sum <= b) {
            k = mid;
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }
    
    std::vector<ll> c(n);
    for (ll i = 0; i < n; i++) c[i] = v[i].first + k * v[i].second;
    std::nth_element(c.begin(), c.begin() + k, c.end());
    ll sum = 0;
    for (ll i = 0; i < k; i++) sum += c[i];
    
    std::cout << k << " " << sum << "\n";
    
    return 0;
}
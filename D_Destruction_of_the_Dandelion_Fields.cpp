#include <bits/stdc++.h>
using ll = long long;
const ll INF = 1e9 + 7;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    std::vector<ll> odd;
    ll esum = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            esum += a[i];
        } 
        else {
            odd.push_back(a[i]);
        }
    }
    if (odd.empty()) { 
        std::cout << 0 << '\n'; 
        return; 
    }
    std::sort(odd.rbegin(), odd.rend());
    ll osum = std::accumulate(odd.begin(), odd.begin() + (odd.size() + 1) / 2, 0LL);
    std::cout << esum + osum << '\n';
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
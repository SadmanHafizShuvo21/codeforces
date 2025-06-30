#include<bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    ll sum = std::accumulate(a.begin(), a.end(), 0LL);
    ll mx = *std::max_element(a.begin(), a.end());

    // std::cout << "Sum: " << sum << ", Max: " << mx << '\n';

    std::cout << (sum % 2 == 0 && sum >= 2 * mx ? "YES" : "NO") << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);  
    solve();
}
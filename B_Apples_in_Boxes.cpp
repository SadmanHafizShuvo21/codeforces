#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, k;
    std::cin >> n >> k;

    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    ll max = *std::max_element(a.begin(), a.end());
    ll min = *std::min_element(a.begin(), a.end());
    ll count = std::count(a.begin(), a.end(), max);
    ll sum = std::accumulate(a.begin(), a.end(), 0LL);

    ll rem = max - min - 1;
    if (rem > k || (rem == k && count > 1)) {
        std::cout << "Jerry" <<"\n";
        return;
    }
    
    if (sum % 2 == 0) {
        std::cout << "Jerry" << "\n";
    }
    else {
        std::cout << "Tom" << "\n";
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
}

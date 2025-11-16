#include<bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, k;
    std::cin >> n >> k;

    ll l = 0, r = 0;
    for (int i = 0; i < n; i++) {
        ll x;
        std::cin >> x;
        l += (x < k);
        r += (x > k);
    }
    std::cout<< (l <= r ? k + 1 : k - 1) << "\n";
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

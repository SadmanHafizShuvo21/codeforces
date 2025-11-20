#include<bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);

    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    ll ans = 1, mx = a[0];
    for (int i = 1; i < n; i++) {
        // std::cout << mx << " \n"[i == n - 1];
        ans += (a[i] > mx);
        mx = std::max(mx, a[i]);
    }
    std::cout<< ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    // int t;
    // std::cin >> t;
    // while(t--) {
    //     solve();
    // }
    solve();
}

#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    
    std::vector<ll>a(n), b(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        std::cin >> b[i];
    }
    
    std::vector<ll> dp1(n), dp2(n);
    dp1[0] = a[0];
    dp2[0] = b[0];
    for (int i = 1; i < n; i++) {
        dp1[i] = std::max(dp1[i-1], dp2[i-1] + a[i]);
        dp2[i] = std::max(dp2[i-1], dp1[i-1] + b[i]);
    }

    std::cout << std::max(dp1[n-1], dp2[n-1]) << "\n";
}

int main() {
    std::ios::sync_with_stdio(false); 
    std::cin.tie(nullptr);

    solve();
}
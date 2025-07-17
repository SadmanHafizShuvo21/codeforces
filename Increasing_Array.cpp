#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    
    std::vector<ll>a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    ll ans = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] < a[i - 1]) {
            ans += (a[i - 1] - a[i]);
            a[i] = a[i - 1];
        }
    }

    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false); 
    std::cin.tie(nullptr);

    solve();
}
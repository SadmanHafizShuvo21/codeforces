#include<bits/stdc++.h>
using ll = long long;

void solve(){
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    ll ans = a[0], sum = a[0];
    for (int i = 1; i < n; i++) {
        sum = std::max(0LL, sum);
        sum = (std::abs(a[i] - a[i - 1]) % 2 ? sum + a[i] : a[i]);
        ans = std::max(ans, sum);
    }
    std::cout << ans << "\n";
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}

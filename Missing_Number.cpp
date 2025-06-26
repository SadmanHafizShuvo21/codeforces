#include<bits/stdc++.h>
using ll = long long;   

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);

    ll sum = 0;
    for (ll i = 0; i < n; i++) {    
        std::cin >> a[i];
        sum += a[i];
    }

    std::cout << (n * (n + 1) / 2 - sum) << "\n";
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
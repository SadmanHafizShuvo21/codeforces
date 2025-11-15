#include<bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, k;
    std::cin >> n >> k;

    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ll x;
        std::cin >> x;
        ans += ((x / k) +(x % k == 0 ? 0 : 1));
    }
    std::cout<< ans <<"\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}

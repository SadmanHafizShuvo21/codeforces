#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
void solve() {
    ll n, k;
    std::cin >> n >> k;

    ll cnt = 0;
    for (int i = 0; i < n; i++) {
        ll x;
        std::cin >> x;
        cnt += (x + k < 6);
    }
    std::cout << cnt / 3 << "\n";   
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
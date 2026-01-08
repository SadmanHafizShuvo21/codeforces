#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
void solve() {
    std::vector<ll> a(4);
    for (int i = 0; i < 4; i++) {
        std::cin >> a[i];
    }
    
    ll mx = *std::max_element(a.begin(), a.end());
    for (int i = 0; i < 4; i++) {
        if (mx - a[i] > 0) {
            std::cout << mx - a[i] << " ";
        }
    }
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
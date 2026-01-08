#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::vector<ll> x, y, z;
    for (int i = 0; i < n; i++) {
        if (a[i] == 1) {
            x.push_back(i);
        } 
        else if (a[i] == 2) {
            y.push_back(i);
        }
        else {
            z.push_back(i);
        }
    }

    ll mx = std::min({x.size(), y.size(), z.size()});
    if (mx == 0) {
        std::cout << 0 << "\n";
        return;
    }
    std::cout << mx << "\n";
    for (int i = 0; i < mx; i++) {
        std::cout << x[i] + 1 << " " << y[i] + 1 << " " << z[i] + 1 << "\n";
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
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
const ll error = 1e-6;
void solve() {
    std::vector<ll> a(3);
    for (int i = 0; i < 3; i++) {
        std::cin >> a[i];
    }
    
    std::sort(a.begin(), a.end());
    ll dif = a[2] - a[0];

    if (dif >= 10) {
        std::cout << "check again" << "\n";
        return;
    }
    std::cout << "final " << a[1] << "\n";
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

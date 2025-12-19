#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve(){
    std::vector<ll> a(7);
    for (int i = 0; i < 7; i++) {
        std::cin >> a[i];
    }

    std::cout << a[0] << " " << a[1] << " " << a[6] - a[0] - a[1] << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--){
        solve();
    }
    // solve();
}

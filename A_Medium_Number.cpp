#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
void solve() {
    std::vector<ll> a(3);
    for (int i = 0; i< 3; i++) {
        std::cin >> a[i];
    }
    
    std::sort(a.begin(), a.end());
    std::cout << a[1] << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
    // solve();
}
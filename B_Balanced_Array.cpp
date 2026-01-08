#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;

void solve() {
    ll n;
    std::cin >> n;
    if (n % 4 != 0) {
        std::cout << "NO" << "\n";
        return;
    }

    std::cout << "YES" << "\n";  
    ll sume = 0;
    for (int i = 2; i <= n; i += 2) {
        std::cout << i << " ";
        sume += i;
    } 

    ll sumo = 0;
    for (int i = 1; i < n - 2; i += 2) {
        std::cout << i << " ";
        sumo += i;
    }

    std::cout << sume - sumo << "\n";
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

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
    std::sort(a.rbegin(), a.rend());
    
    if (a[0] == a[n - 1]) {
        std::cout << "NO" << "\n";
        return;
    }

    if (a[0] == a[1]) {
        std::swap(a[0], a[n - 1]);
    }

    std::cout << "YES" << "\n";
    for (int i = 0; i < n; i++) {
        std::cout << a[i] << " \n"[i == n - 1];
    } 
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}

#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n;
    std::cin >> n;

    std::vector<ll> a(n);
    for(int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    
    ll mn = *std::min_element(a.begin(), a.end());
    ll sum = 0;
    for(int i = 0; i < n; i++) {
        sum += (a[i] - mn);
    }
    std::cout << sum << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    // solve();
}


















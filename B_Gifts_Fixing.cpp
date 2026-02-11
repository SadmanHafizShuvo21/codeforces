#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;
std::vector<int> primes;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    
    for (int i = 0; i < n; i++) {
        std::cin >> b[i];
    }
    ll mna = *std::min_element(a.begin(), a.end());
    ll mnb = *std::min_element(b.begin(), b.end());

    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ans += std::max(a[i] - mna, b[i] - mnb);
    }

    std::cout << ans << "\n";
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


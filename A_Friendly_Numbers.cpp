// 11 Feb 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

ll digit_sum(ll n) {
    ll sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
void solve() {
    ll n;
    std::cin >> n;
    
    ll ans = 0;
    for (int i = n; i <= n + 90; i++) {
        if (i - digit_sum(i) == n) {
            ans++;
        }
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

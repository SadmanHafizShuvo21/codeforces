// 25 April 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

ll baseSum(ll n, ll x) {
    ll sum = 0, i = x;
    while(n > 0) {
        sum += (n % i);
        n /= i;
    }
    return sum;
}
void solve() {
    ll n;
    std::cin >> n;
    
    ll sum = 0;
    for (int i = 2; i < n; i++) {
        sum += baseSum(n, i);
    }

    ll g = std::__gcd(sum, n - 2);
    std::cout << sum / g << "/" << (n - 2) / g << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    // int t;
    // std::cin >> t;
    // while (t--) {
    //     solve();
    // }
    solve();
}
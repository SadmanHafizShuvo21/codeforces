#include <bits/stdc++.h>
using ll = long long;
using lld = double;
using llx = __int128;

void solve() {
    ll n;
    std::cin >> n;
    
    ll x = 0;
    ll sq = std::sqrt(n);
    for (int i = 1; i <= sq; i++) {
        if (n % i == 0 && std::gcd(i, n / i) == 1) {
            x = i;
        }
    }

    std::cout << x << " " << n / x << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}

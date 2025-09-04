#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const lld e = 1e-12L;

void solve() {
    ll n;
    std::cin >> n;
    
    ll even = 0, odd = 0;
    for (ll i = 0; i < n; i++) {
        ll x;
        std::cin >> x;
        if (x % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }
    }

    std::cout << (even > odd ? "Sebastian" : "Notbastian") << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
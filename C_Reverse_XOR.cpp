#include <bits/stdc++.h>
using ll = long long;
using llx = __int128;
const ll N = 1e7 + 6;

bool check (ll n) {
    std::string s, rv;
    while (n > 0) {
        s += ((n % 2) + '0');
        n /= 2;
    }

    rv = s;
    std::reverse(rv.begin(), rv.end());
    return s == rv;
}

void solve() {
    ll n;
    std::cin >> n;
    if ((__builtin_popcount(n)) & 1) {
        std::cout << "NO\n";
        return;
    }
    
    ll x = __builtin_ctz(n);
    n >>= x;
    std::cout << (check(n) ? "YES" : "NO") << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
   
    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
}
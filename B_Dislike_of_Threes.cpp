#include <bits/stdc++.h>
using ll = long long;
using lld = double;
using llx = __int128;

void solve() {
    ll n;
    std::cin >> n;
    
    ll x = 1, ans = 0;
    while(ans < n) {
        if (x % 3 != 0 && x % 10 != 3) {
            ans++;
        }
        x++;
    }
    std::cout << x - 1 << "\n";
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

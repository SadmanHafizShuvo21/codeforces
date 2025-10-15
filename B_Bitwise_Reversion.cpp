#include <bits/stdc++.h>
using ll = long long;
using llx = __int128;
const ll N = 1e7 + 6;

void solve() {
    ll x, y, z;
    std::cin >> x >> y >> z;
    
    bool ok = true;
    for (int i = 0; i < 32; i++) {
        ll cnt = (x >> i & 1) + (y >> i & 1) + (z >> i & 1);
        if (cnt == 2) {
            ok = false;
            break;
        } 
    }
    std::cout << (ok ? "YES" : "NO") << "\n";
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
#include <bits/stdc++.h>
using ll = long long;
using lld = double;
using llx = __int128;
const lld e = 1e-12L;

void solve() {
    ll n, k, h;
    std::cin >> n >> k >> h;

    ll cnt = 0;
    for(int i = 0; i < n; i++) {
        ll x; 
        std::cin >> x;
        ll time = (x + k - 1) / k;
        if (time > h) {
            std::cout << -1 << "\n";
            return;
        }
        cnt += time;
    }
    
    std::cout << (cnt + h - 1) / h << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
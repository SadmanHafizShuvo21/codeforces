#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, k;
    std::cin >> n >> k;
    std::map<ll, ll> mp;
    for (int i = 0; i < n; i++) {
        ll a;
        std::cin >> a;
        
        ll rem = k - a;
        if (mp.count(rem)) {
            std::cout << mp[rem] + 1 << " " << i + 1 << "\n";
            return;
        }
        mp[a] = i;
    }
    std::cout << "IMPOSSIBLE" << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}
#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, m;
    std::cin >> n >> m;
    std::vector<ll> a(n), b(m);
    std::map<ll, ll> mp;
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        mp[a[i]]++;
    }
    for (int i = 0; i < m; i++) {
        std::cin >> b[i];
    }
    
    for (int i = 0; i < m; i++) {
        std::cout << ((mp.find(b[i]) != mp.end()) ? mp[b[i]] : 0 ) << "\n";
        mp.erase(b[i]);
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}

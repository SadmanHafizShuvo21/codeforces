#include <bits/stdc++.h>
using ll = long long;
const ll N = 2e5 + 5;
    
void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    std::set<ll> s;
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        s.insert(a[i]);
    }
    std::cout << (s.size() != n ? "YES" : "NO") << "\n";
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
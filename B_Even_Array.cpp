#include<bits/stdc++.h>
using ll = long long;
using lld = double;
const ll inf = 1e18;
void solve() {
    ll n;
    std::cin >> n; 
    
    ll cnta = 0, cntb = 0;
    for (int i = 0; i < n; i++) {
        ll x;
        std::cin >> x;
        if (i % 2 != x % 2) {
            cnta += (x % 2 ? 1 : 0);
            cntb += (x % 2 == 0 ? 1 : 0);
        }
    }
    std::cout << (cnta == cntb ? cnta : -1) << "\n";   
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
    // solve();
}
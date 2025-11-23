#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;


void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {  
        std::cin >> a[i];
    }

    std::vector<ll> pref(n);
    pref[0] = a[0];
    for (int i = 1; i < n; i++) { 
        pref[i] = std::min(pref[i - 1], a[i]);
    }

    std::vector<ll> suf(n);
    suf[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--) { 
        suf[i] = std::max(suf[i + 1], a[i]);
    }
    
    for (int i = 0; i < n - 1; i++) {
        if (pref[i] > suf[i + 1]) {
            std::cout << "No" << "\n";
            return;
        }
    }
    std::cout << "Yes" << "\n";
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

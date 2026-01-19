// 18 Jan 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e6 + 7;
const ll error = 1e-6;
std::vector<ll> a;
std::vector<ll> precompute() {
    for (ll i = 1; i <= 9; i++) {
        ll x = 0;
        for (int j = 1; j <= 9; j++) {
            x = x * 10 + i;
            a.push_back(x);
        }
    }
    std::sort(a.begin(), a.end());
    return a;
}
void solve() {
    ll n;
    std::cin >> n;

    ll l = a.size();
    for (int i = 0; i < l; i++) {
        if (a[i] > n) {
            std::cout << i << "\n";
            return;
        }
    }
    std::cout << l << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
   
    precompute();
    
    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
    // solve();
}

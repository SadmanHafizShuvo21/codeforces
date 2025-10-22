#include <bits/stdc++.h>
using ll = long long;
const ll N = 2e5 + 5;

ll check (ll a, ll b) {
    ll ans = a;
    for (int i = 32; i >= 0; i--) {
        ll x = (a >> i) & 1;
        ll y = (b >> i) & 1;
        if (x != y) {
            ans = (b | ((1LL << i) - 1));
            break;
        }
    }
    return ans;
}
void solve() {
    ll a, b;
    std::cin >> a >> b;
    if (a == b) {
        std::cout << a << "\n";
        return;
    }
    
    if (a < 0 && b >= 0) {
        std::cout << -1 << "\n";
        return;
    }
    
    std::cout << check(a, b) << "\n";
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
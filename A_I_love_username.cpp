#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
void solve() {
    ll n, best;
    std::cin >> n >> best;
    
    ll worst = best, ans = 0;
    for (int i = 1; i < n; i++) {
        ll x;
        std::cin >> x;
        if (x < worst) {
            worst = x;
            ans++;
        }
        if (x > best) {
            best = x;
            ans++;
        }
    }
    
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    // int t;
    // std::cin >> t;
    // while(t--) {
    //     solve();
    // }
    solve();
}
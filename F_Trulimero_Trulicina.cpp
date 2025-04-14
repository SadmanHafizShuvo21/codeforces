#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, m, k;
    std::cin >> n >> m >> k;
    std::vector<std::vector<ll>> ans(n, std::vector<ll>(m));

    if (k == 2) {
        for (ll i = 0; i < n; i++){
            for (ll j = 0; j < m; j++){
                ans[i][j] = (i + j) % 2 + 1;
            }
        }            
    } 
    else {
        ll curr = 1;
        for (ll i = 0; i < n; i++) {
            for (ll j = 0; j < m; j++) {
                ans[i][j] = curr;
                curr = curr % k + 1;
            }
            if (m % k == 0) {
                curr = (curr + 1) % k;
                if (curr == 0) {
                    curr = k;
                }
            }
        }
    }

    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++){
            std::cout << ans[i][j] << " \n"[j==m-1] ;
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ll t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}

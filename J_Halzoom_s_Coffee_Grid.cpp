#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;


void solve() {
    ll n, m, k;
    std::cin >> n >> m >> k;
    std::vector<std::vector<ll>> a(n, std::vector<ll>(m));
    for (int i = 0; i < n; i++) {  
        for (int j = 0; j < m; j++) {
            std::cin >> a[i][j];
        }
    }

    std::vector<std::vector<ll>> pref(n + 1, std::vector<ll>(m + 1, 0));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            pref[i][j] = a[i - 1][j - 1] + pref[i - 1][j] + pref[i][j - 1] - pref[i - 1][j - 1];
        }
    }

    auto get_sum = [&](ll r1, ll c1, ll r2, ll c2) -> ll {
        r1++, c1++, r2++, c2++; 
        return pref[r2][c2] - pref[r2][c1 - 1] - pref[r1 - 1][c2] + pref[r1 - 1][c1 - 1];
    };

    std::vector<std::vector<bool>> ans(n, std::vector<bool>(m, false));
    for (int r1 = 0; r1 < n; r1++) {
        for (int r2 = r1; r2 < n; r2++) {
            for (int c1 = 0; c1 < m; c1++) {
                for (int c2 = c1; c2 < m; c2++) {
                    ll sum = get_sum(r1, c1, r2, c2);
                    if (sum == k) {
                        for (int i = r1; i <= r2; i++) {
                            for (int j = c1; j <= c2; j++) {
                                ans[i][j] = true;
                            }
                        }
                    }
                }
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << (ans[i][j] ? a[i][j] : 0) << " \n"[j == m - 1];
        }
    }
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

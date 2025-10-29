#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
const int N = (1 << 20) + 5;
const ll mod = 998244353;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        std::cin >> b[i];
    }

    ll m;
    std::cin >> m;
    std::vector<ll> c(m), d(m);
    for (int i = 0; i < m; i++) {
        std::cin >> c[i];
    }
    for (int i = 0; i < m; i++) {
        std::cin >> d[i];
    }

    std::unordered_map<ll, ll> dp;
    dp.reserve(n + m);
    for (int i = 0; i < n; i++) {
        dp[a[i]] += b[i];
    }
    for (int i = 0; i < m; i++) {
        dp[c[i]] -= d[i];
    }

    ll ans = 1;
    for (auto &x : dp) {
        if (x.second != 0) {
            if (x.second < 0) { 
                ans = 0; 
                break; 
            }
            ans = (ans * 2) % mod;
        }
    }
    
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}

#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n + 1);
    for (ll i = 1; i <= n; i++) {
        std::cin >> a[i];
    }

    std::string s;
    std::cin >> s;

    std::vector<ll> vis(n + 1, 0), cnt(n + 1, 0);

    for (ll i = 1; i <= n; i++) {
        if (vis[i] == 0) {
            ll x = i;
            std::vector<ll> cycle;
            
            while (vis[x] == 0) {
                vis[x] = 1;
                cycle.push_back(x);
                x = a[x]; 
            }

            ll count = 0;
            for (auto it : cycle) {
                count += (s[it - 1] == '0');  
            }

            for (auto it : cycle) {
                cnt[it] = count;
            }
        }
        std::cout << cnt[i] << " \n"[i==n]; 
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}

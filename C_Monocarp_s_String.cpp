#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::string s;
    std::cin >> n >> s;
    
    std::vector<ll> pre(n + 1, 0);
    for (int i = 0; i < n; i++) {
        pre[i + 1] = pre[i] + (s[i] == 'a' ? 1 : -1);
    }
 
    ll need = pre[n], ans = n;
    ll mn = *std::min_element(pre.begin(), pre.end());

    std::vector<ll> v(n + 1, -1);
    for (int i = 0; i <= n; i++) {
        ll x = pre[i] - mn;
        v[x] = i;
        ll j = x - need;
        if (0 <= j && j <= n && v[j] != -1) {
            ans = std::min(ans, i - v[j]);
        }
    }
    
    std::cout << (ans == n ? -1 : ans) << "\n";
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

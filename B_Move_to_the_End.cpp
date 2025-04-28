#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    std::vector<ll> suf(n+1);
    for (int i = 1; i <= n; i++) {
        suf[i] = suf[i-1] + a[n-i];
    }
    std::vector<ll> pref(n+1);
    ll cur = 0;
    for (int i = 1; i <= n; i++) {
        cur = std::max(cur, a[i-1]);
        pref[i] = cur;
    }
    for (int k = 1; k <= n; k++) {
        ll x = suf[k];
        int pos = n - k + 1;
        if (pos < 1) pos = 0;
        ll y = suf[k-1] + pref[pos];
        std::cout << std::max(x, y) << " \n"[k==n];
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

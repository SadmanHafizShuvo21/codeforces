#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::vector<ll> ans(n);
    ll max = a[0], b = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] <= max) {
            b = std::max(b, a[i] % max + max % a[i]);
            ans[i] = b;
        } 
        else if (a[i] < 2 * max) {
            max = a[i];
            b = a[i]; 
            ans[i] = b;
        } 
        else {
            max = a[i];
            b = 0; 
            for (int j = 0; j < i; j++) {
                b = std::max(b, max % a[j] + a[j] % max);
            }
            ans[i] = b;
        }
    }

    for (int i = 0; i < n; i++) {
        std::cout << ans[i] << " \n"[i == n - 1];
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
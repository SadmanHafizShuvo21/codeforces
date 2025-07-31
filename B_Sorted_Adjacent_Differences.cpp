#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::sort(a.begin(), a.end());

    for (int i = 0; i < n; i++) {
        std::cout << a[i] << " \n"[i == n - 1];
    }
    std::vector<ll> b;
    ll l = 0, r = n - 1;
    for (int i = 0; i < n; i++) {
        if (i % 2) {
            b.push_back(a[l]);
            l++;
        }
        else {
            b.push_back(a[r]);
            r--;
        }
    }

    std::reverse(b.begin(), b.end());
    for (int i = 0; i < n; i++) {
        std::cout << b[i] << " \n"[i == n - 1];
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

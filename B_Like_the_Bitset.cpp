#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n, k;
    std::string s;
    std::cin >> n >> k >> s;
    
    if (k == 1) {
        if (s.find('1') != std::string::npos) {
            std::cout << "NO" << "\n";
            return;
        }
    }

    bool ok = (s.find(std::string(k, '1')) != std::string::npos);
    if (ok) {
        std::cout << "NO" << "\n";
        return;
    }

    std::cout << "YES" << "\n";
    std::vector<ll> a(n, 0);
    ll cnt = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            a[i] = cnt++;
        }
    }
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            a[i] = cnt++;
        }
    }

    for (int i = 0; i < n; i++) {
        std::cout << a[i] + 1 << " \n"[i == n - 1];
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin >> t;
    while (t--) solve();
}

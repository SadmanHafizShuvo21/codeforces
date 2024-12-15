#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, m, k;
    std::cin >> n >> m >> k;

    ll ans = 0, count = 0, step = 0;
    std::string s;
    std::cin >> s;

    for (int i = 0; i < n; i++) {
        if (i >= step && s[i] == '0') {
            count++;
        } else {
            count = 0;
        }
        if (count == m) {
            ans++;
            count = 0;
            step = i + k; 
        }
    }

    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}

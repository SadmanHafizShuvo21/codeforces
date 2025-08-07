#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, x;
    std::string s;
    std::cin >> n >> x >> s;
    x--;

    ll l = x, r = x;
    while(l >= 0 && s[l] == '.') {
        l--;
    }
    while(r < n && s[r] == '.') {
        r++;
    }

    ll res = std::max(std::min(x, n - r), std::min(l + 1, n - x - 1)) + 1;
    std::cout << res << '\n';
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

#include <bits/stdc++.h>
using ll = long long;
using lld = double;
using llx = __int128;
const lld e = 1e-12L;

void solve() {
    ll n;
    std::string s;
    std::cin >> n >> s;

    std::vector<int> pref(n, 0);
    for (int i = 0; i < n - 1; i++) {
        pref[i + 1] = pref[i] + (s[i] == s[i + 1]);
    }

    ll q;
    std::cin >> q;
    while (q--) {
        ll l, r;
        std::cin >> l >> r;
        l--; 
        std::cout << (r - l >= 1 ? pref[r - 1] - pref[l] : 0) << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
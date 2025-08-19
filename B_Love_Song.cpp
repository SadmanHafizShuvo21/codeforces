#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, q;
    std::cin >> n >> q;
    std::string s;
    std::cin >> s;

    std::vector<ll> pref(n + 1);
    for (int i = 0; i < n; i++) {
        pref[i + 1] = pref[i] + s[i] - 'a' + 1;
    }

    while (q--) {
        ll l, r;
        std::cin >> l >> r;
        l--;
        std::cout << pref[r] - pref[l] << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
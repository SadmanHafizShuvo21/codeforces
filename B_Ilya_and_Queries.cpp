#include<bits/stdc++.h>
using ll = long long;

void solve() {
    std::string s;
    std::cin >> s;

    ll n = s.size();
    std::vector<ll>pref(n + 1, 0);
    for (int i = 1; i < n; i++) {
        pref[i] = pref[i - 1] + (s[i] == s[i - 1]);
    }
    ll q;
    std::cin >> q;
    while(q--) {
        ll l, r;
        std::cin >> l >> r;
        l--;
        r--;
        std::cout << pref[r] - pref[l] << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
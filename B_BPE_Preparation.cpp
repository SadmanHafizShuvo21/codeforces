#include <bits/stdc++.h>
using ll = long long;

void solve() {
    std::string s;
    std::cin >> s;
    ll n = s.size();

    std::map<ll, ll> mp;
    for (ll i = 1; i < n; i++) {
        ll j = mp[i - 1];
        while (j > 0 && s[i] != s[j]) {
            j = mp[j - 1];
        }

        if (s[i] == s[j]) {
            j++;
        }
        mp[i] = j;
    }

    ll len = n - mp[n - 1];
    std::cout << (n % len ? s : s.substr(0, len)) << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}

#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const lld e = 1e-12L;

void solve() {
    ll n;
    std::string s;
    std::cin >> n >> s;

    std::vector<ll> v;
    ll l = 0, cur = 0;
    for (ll i = 0; i < n; i++) {
        if (s[i] == '(') {
            cur++;
            l++;
        } 
        else {
            cur--;
        }
        if (cur == 0) {
            v.push_back(l);
            l = 0;
        }
    }
    ll ans = 0, j = 0;
    for (ll i = v.size() - 1; i >= 0; i--) {
        ans += v[i] * j;
        j += v[i];
    }
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
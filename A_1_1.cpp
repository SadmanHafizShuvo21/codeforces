// 09 March 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n;
    std::string s;
    std::cin >> n >> s;
    for (int i = 1; i < n - 1; i++) {
        if (s[i - 1] == s[i + 1] && s[i - 1] == '1') {
            s[i] = '1';
        }
    }

    ll mx = std::count(s.begin(), s.end(), '1');
    ll mn = 0;
    for (int l = 0, r = 0; l < n; l = r) {
        while (r < n && s[l] == s[r]) {
            r++;
        }

        if (s[l] == '1') {
            mn += (r - l) / 2 + 1;
        }
    }
    std::cout << mn << " " << mx << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    // solve();
}


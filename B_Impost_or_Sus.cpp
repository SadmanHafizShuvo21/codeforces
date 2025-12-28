#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e6 + 7;
const ll error = 1e-6;

void solve() {
    std::string s;
    std::cin >> s;

    ll n = s.size();
    std::set<int> req;
    req.insert(0);
    req.insert(n - 1);
    for (int i = 0; i < n; i++) {
        if (s[i] == 's') {
            req.insert(i);
        }
    }
    std::vector<int> v(req.begin(), req.end());
    std::sort(v.begin(), v.end());

    ll ans = 0;
    if (s[0] != 's') {
        ans++;
    }
    if (s[n - 1] != 's') {
        ans++;
    }
    for (int i = 0; i < v.size() - 1; i++) {
        ll x = v[i + 1] - v[i];
        if (x > 2) {
            ans += (x + 1) / 2 - 1;
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
    // solve();
}

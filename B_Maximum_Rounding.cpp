#include <bits/stdc++.h>
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
    ll add = 0, st = n;
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] + add >= '5') {
            add = 1;
            st = i;
        }
        else {
            s[i] += add;
            add = 0;
        }
    }

    for (int i = st; i < n; i++) {
        s[i] = '0';
    }
    
    std::cout << (add ? '1' + s : s) << "\n";
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

// 07 May 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;
const ll mod = 998244353;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<std::string> s;

    while (n > 0) {
        ll l = 1;
        while (l * (l + 1) / 2 <= n) {
            l++;
        }
        l--;

        n -= l * (l + 1) / 2;
        s.push_back(std::string(l, 'a'));
    }
    for (int i = 0; i < s.size(); i++) {
        std::cout << s[i] << " ";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    // int t;
    // std::cin >> t;
    // while (t--) {
    //     solve();
    // }
    solve();
}
// 25 April 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

ll baseSum(ll n, ll x) {
    ll sum = 0, i = x;
    while(n > 0) {
        sum += (n % i);
        n /= i;
    }
    return sum;
}
void solve() {
    std::string s;
    std::cin >> s;

    ll cnt = 0;
    for (int i = 0; i < s.size() - 1; i++) {
        cnt += (s[i] == s[i + 1]);
    }
    std::cout << (cnt > 2 ? "NO" : "YES") << "\n";
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
// 15 May 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void print128(llx x) {
    if (x == 0) {
        std::cout << 0 << "\n";
        return;
    }

    std::string s;
    while (x > 0) {
        s += char('0' + x % 10);
        x /= 10;
    }

    reverse(s.begin(), s.end());
    std::cout << s << "\n";
}
void solve() {
    ll n;
    std::cin >> n;

    llx ans =  (llx)n * n / 4;
    print128(ans);
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
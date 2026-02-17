// 17 Feb 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n;
    std::cin >> n;
    ll rem = n % 7;

    std::string s = std::to_string(n);
    bool ok = std::find(s.begin(), s.end(), '7') != s.end();

    if (rem != 0 && ok == false) {
        std::cout << 0 << "\n";
    }
    else if (rem == 0 && ok == false) {
        std::cout << 1 << "\n";
    }
    else if (rem != 0 && ok == true) {
        std::cout << 2 << "\n";
    }
    else {
        std::cout << 3 << "\n";
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


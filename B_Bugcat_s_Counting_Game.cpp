// 15 April 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

bool check(ll n, ll k) {
    while (n > 0) {
        if (n % 10 == k) {
            return true;
        }
        n /= 10;
    }
    return false;
}

void solve() {
    ll k, x;
    std::cin >> k >> x;

    ll cnt = 0, i = 1;
    while (true) {
        if (i % k == 0 || check(i, k)) {
            cnt++;
            if (cnt == x) {
                std::cout << i << "\n";
                break;
            }
        }
        i++;
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
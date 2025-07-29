#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;

    ll cnt = 0;
    while (n != 1) {
        if (n % 6 == 0) {
            n /= 6;
            cnt ++;
        }
        else if (n % 3 == 0) {
            n *= 2;
            cnt++;
        }
        else {
            cnt = -1;
            break;
        }
    }
    std::cout << (cnt >= 0 ? cnt : -1) << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}

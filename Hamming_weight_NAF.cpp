#include <bits/stdc++.h>
using ll = long long;
const ll N = 2e5 + 5;

int check(ll n) {
    int cnt = 0;
    while (n > 0) {
        if (n % 2 != 0) {
            cnt++;
            n += (n % 4 == 3 ? 1 : -1);
        }
        n /= 2;
    }
    return cnt;
}

void solve() {
    ll a, b;
    std::cin >> a >> b;
    ll diff = abs(a - b);
    std::cout << check(diff) << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
   
    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
}
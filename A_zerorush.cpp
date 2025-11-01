#include <bits/stdc++.h>
using ll = long long;
const ll inf = 1e18;
void solve() {
    ll n;
    std::cin >> n;

    ll ans = inf;
    for(int i = 0; i < n; i++) {
        ll a;
        std::cin >> a;
        if (a % 2 == 0) {
            a = a < 0 ? -a : a;
            ans = std::min(ans, a / 2);
        }
    }

    std::cout << (ans == inf ? -1 : ans) << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}

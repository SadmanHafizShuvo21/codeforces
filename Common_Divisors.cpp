#include<bits/stdc++.h>
using ll = long long;

ll countDivisor(ll n) {
    ll sq = std::sqrt(n);
    ll cnt = 0;
    for(int i = 1; i <= sq; i++) {
        if (n % i == 0) {
            cnt++;
        }
    }

    ll ans = 2 * cnt - (sq * sq == n);
    return ans;
}
void solve() {
    ll n;
    std::cin >> n;

    ll g = 0;
    for (int i = 0; i < n; i++) {
        ll a;
        std::cin >> a;
        g = std::gcd(g, a);
    }

    std::cout << countDivisor(g) << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    // int t;
    // std::cin >> t;
    // while(t--) {
    //     solve();
    // }
    solve();
}
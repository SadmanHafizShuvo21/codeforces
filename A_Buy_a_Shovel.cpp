#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
void solve() {
    ll n, k;
    std::cin >> n >> k;
    
    ll val = n, i = 2, ans = 1;
    while(true) {
        if (val % 10 == 0 || val % 10 == k) {
            std::cout << ans << "\n";
            return;
        }
        ans++;
        val = n * i;
        i++;
    }
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
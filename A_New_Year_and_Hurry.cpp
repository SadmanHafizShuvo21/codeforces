#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
void solve() {
    ll n, k;
    std::cin >> n >> k;
    
    ll time = 240 - k, st = 5, ans = 0;
    while(time >= st && n > ans) {
        time -= st;
        st += 5;
        ans++;
    }
    std::cout << ans << "\n";
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
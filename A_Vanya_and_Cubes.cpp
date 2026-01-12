#include<bits/stdc++.h>
using ll = long long;
using lld = double;
const ll inf = 1e18;

void solve() {
    ll n;
    std::cin >> n;
    
    ll  i = 1, ans = 0;
    while(n > 0) {
        if (n >= ((i * i) + i) / 2) {
            ans++;
        }

         ll rem = ((i * i) + i) / 2;
        n -= rem;
        i++;
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
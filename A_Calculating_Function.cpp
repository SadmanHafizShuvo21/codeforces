#include<bits/stdc++.h>
using ll = long long;
const ll inf = 1e18;
void solve() {
    ll n;
    std::cin >> n;
    
    std::cout << (n % 2 ? -1 : 1) * (n + 1) / 2 << "\n";
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
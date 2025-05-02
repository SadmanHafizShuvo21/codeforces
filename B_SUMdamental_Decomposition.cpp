#include<bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, x;
    std::cin >> n >> x;

    ll ans = x;
    ll p = __builtin_popcount(x);
    ans += ((std::max(0LL, n - p) + 1) / 2 ) * 2;
    
    if (x == 0){
        if(n == 1) {
            std::cout << -1 << "\n";
        }
        else if (n % 2 == 0) {
            std::cout << n << "\n";
        }
        else {
            std::cout << n + 3 << "\n";
        }
        return;
    }
    else if (x == 1) {
        if(n % 2 == 0) {
            std::cout << n + 3 << "\n";
        }
        else {
            std::cout << n << "\n";
        }
        return;
    }

    std::cout << ans << "\n";
    
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin>>t;
    while (t--) {
        solve();
    }
}

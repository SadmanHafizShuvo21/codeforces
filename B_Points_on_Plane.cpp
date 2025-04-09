#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    ll lo = 0, hi = 1e18, ans = 0;
    while (lo <= hi) {
        ll mid = (lo + hi) / 2;
        __int128 cnt = (__int128)(mid + 1) * (mid + 1);
        if (cnt >= n) {
            ans = mid;
            hi = mid - 1;
        } 
        else {
            lo = mid + 1;
        }
    }
    
    std::cout << ans << "\n";
    // std::cout << (long long)(sqrtl(n-1)) << "\n"; This is the shortest way to find the answer.
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

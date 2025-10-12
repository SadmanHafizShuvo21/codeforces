#include <bits/stdc++.h>
using ll = long long;
using llx = __int128;
const ll N = 1e7 + 6;

llx sumSquares(ll n) {
    return (__int128)n * (n + 1) * (2 * n + 1) / 6;
}

void solve() {
    ll n;
    std::cin >> n;

    ll lo = 1, hi = N;
    while (lo <= hi) {
        ll mid = (lo + hi) / 2;
        llx val = sumSquares(mid);

        if (val < n) {
            lo = mid + 1;
        } 
        else {
            hi = mid - 1;
        }
    }
    std::cout << lo << "\n";
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
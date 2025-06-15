#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll w, h, a, b;
    std::cin >> w >> h >> a >> b;
    
    ll x1, y1, x2, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;

    std::cout << (((x1 != x2 && (x2 - x1) % a == 0) ||(y1 != y2 && (y2 - y1) % b == 0)) ? "Yes" : "No" )<< '\n';
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

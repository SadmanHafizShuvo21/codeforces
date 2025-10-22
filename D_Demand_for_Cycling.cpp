#include<bits/stdc++.h>
using ll = long long;
const ll inf = 1e18;

void solve() {
    ll n; 
    std::cin >> n;

    ll xmin = inf, xmax = -inf, ymin = inf, ymax = -inf;
    while(n--) {
        ll x, y;
        std::cin >> x >> y;
        xmin = std::min(xmin, x);
        xmax = std::max(xmax, x);
        ymin = std::min(ymin, y);
        ymax = std::max(ymax, y);
    }

    std::cout << 4 << "\n";
    std::cout << xmin << " " << ymin << "\n";
    std::cout << xmax << " " << ymin << "\n";
    std::cout << xmax << " " << ymax << "\n";
    std::cout << xmin << " " << ymax << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
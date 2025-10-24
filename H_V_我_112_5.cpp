#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;

void solve() {
    int n;
    std::cin >> n;
    lld ans = 50 + (lld)50 * n / 100.0;
    std::cout << "Vivo " << std::fixed << std::setprecision(3) << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}

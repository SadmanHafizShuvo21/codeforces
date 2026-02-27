// 27 Feb 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    int Amy = 14, Mom = 38;
    while (3 * Amy != Mom) {
        if (Amy == 0) {
            std::cout << "Answer not found" << "\n";
            return;
        }
        Amy--;
        Mom--;
    }
    std::cout << Amy << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    // int t;
    // std::cin >> t;
    // while (t--) {
    //     solve();
    // }
    solve();
}
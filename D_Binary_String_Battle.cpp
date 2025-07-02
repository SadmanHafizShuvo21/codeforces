#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n, k;
    std::cin >> n >> k;
    std::string s;
    std::cin >> s;

    int one = std::count(s.begin(), s.end(), '1');
    std::cout << ((one <= k || 2 * k > n) ? "Alice" : "Bob") << '\n';
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

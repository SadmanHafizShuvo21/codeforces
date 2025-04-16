#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::cout << (n+1)/2 << '\n';
    for (int i = 1; i < 3 * n + 1 - i; i+=3) {
        int a = i;
        int b = 3 * n + 1 - i;
        std::cout << a << ' ' << b << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

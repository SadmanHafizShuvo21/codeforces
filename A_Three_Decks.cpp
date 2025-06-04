#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int a, b, c;
    std::cin >> a >> b >> c;
    int sum = a + b + c;
    std::cout<< ((sum % 3 == 0 && b <= sum / 3) ? "YES" : "NO" )<< "\n";
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


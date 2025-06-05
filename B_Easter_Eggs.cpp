#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::string s = "ROYGBIV", s1 ="GBIV";
    n-=7;
    for (int i = 0; i < n; i++) {
        s += s1[i % 4];
    }
    std::cout << s << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll h1, a1, c1, h2, a2;
    std::cin >> h1 >> a1 >> c1 >> h2 >> a2;
    
    std::vector<std::string> a;
    while (h2 > 0) {
        if (h2 <= a1 || h1 > a2) {
            h2 -= a1;
            h1 -= a2;
            a.push_back("STRIKE");
        }
        else {
            h1 += (c1 - a2);
            a.push_back("HEAL");
        }
    }

    std::cout << a.size() << "\n";
    for (int i = 0; i < a.size(); i++) {
        std::cout << a[i] << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
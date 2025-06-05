#include <bits/stdc++.h>
using ll = long long;

bool move(int m, int k) {
    for (int i = 1; i * i <= m; i++) {
        if (m % i == 0) {
            int d1 = i, d2 = m / i;
            if ((d1 >= k && m / d1 >= 2) || (d2 >= k && m / d2 >= 2)) {
                return true;
            }
        }
    }
    return false;
}

void solve() {
    int n, m, k;
    std::cin >> n >> m >> k;

    if (!move(m, k)) {
        std::cout << "Marsel" << "\n";
        return;
    } 

    if (n % 2 == 1) {
        std::cout << "Timur" << "\n";
        return;
    } 
    
    std::cout << "Marsel" << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}

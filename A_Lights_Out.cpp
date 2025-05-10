#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int press[3][3], li[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cin >> press[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int chk = press[i][j];

            if (i > 0) {
                chk += press[i - 1][j];
            }
            if (i < 2) {
                chk += press[i + 1][j];
            }
            if (j > 0) {
                chk += press[i][j - 1];
            }
            if (j < 2) {
                chk += press[i][j + 1];
            }
            li[i][j] = (chk % 2 == 0);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << li[i][j];
        }
        std::cout << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}

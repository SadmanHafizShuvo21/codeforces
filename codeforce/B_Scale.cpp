//01 Aug 2024
#include <bits/stdc++.h>
using i64 = long long;

void solve() {
    int n, k;
    std::cin >> n >> k;
    char s[n][n];
    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < n; j ++) {
            std::cin>> s[i][j];
        }
    }
    for (int i = 0; i < n; i += k) {
        for (int j = 0; j < n; j += k) {
            std::cout << s[i][j];
        }
        std::cout << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int tesecase;
    std::cin>>tesecase;
    while(tesecase--)
    solve();
}

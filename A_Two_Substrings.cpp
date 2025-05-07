#include <bits/stdc++.h>
using ll = long long;

void solve() {
    std::string s;
    std::cin >> s;

    int n = s.size();
    if (n <= 3) {
        std::cout << "NO" << "\n";
        return;
    }
    for (int i = 0; i < n - 1; i++) {
        if (s.substr(i, 2) == "AB") {
            for (int j = i + 2; j < n - 1; j++) {
                if (s.substr(j, 2) == "BA") {
                    std::cout << "YES" << "\n";
                    return;
                }
            }
            break;
        }
    }


    for (int i = 0; i < n - 1; i++) {
        if (s.substr(i, 2) == "BA") {
            for (int j = i + 2; j < n - 1; j++) {
                if (s.substr(j, 2) == "AB") {
                    std::cout << "YES" << "\n";
                    return;
                }
            }
            break;
        }
    }


    std::cout << "NO" << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}

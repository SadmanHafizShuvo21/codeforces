#include <bits/stdc++.h>
using ll = long long;

const int dr[] = {-1, -1, -1, 0, 0, 1, 1, 1};
const int dc[] = {-1, 0, 1, -1, 1, -1, 0, 1};
bool is_adj(int r1, int c1, int r2, int c2) {
    for (int d = 0; d < 8; ++d) {
        int nr = r1 + dr[d];
        int nc = c1 + dc[d];
        if (nr == r2 && nc == c2) {
            return true;
        }
    }
    return false;
}

void solve() {
    char g[3][3];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            std::cin >> g[i][j];
        }    
    }

    std::string ans = "CCC";
    for (int r1 = 0; r1 < 3; r1++) {
        for (int c1 = 0; c1 < 3; c1++) {
            for (int r2 = 0; r2 < 3; r2++) {
                for (int c2 = 0; c2 < 3; c2++) {
                    if (r1 == r2 && c1 == c2) {
                        continue;
                    }
                    if (!is_adj(r1, c1, r2, c2)) {
                        continue;
                    }
                    for (int r3 = 0; r3 < 3; r3++) {
                        for (int c3 = 0; c3 < 3; c3++) {
                            if ((r3 == r1 && c3 == c1) || (r3 == r2 && c3 == c2)) {
                                continue;
                            }
                            if (!is_adj(r2, c2, r3, c3)) {
                                continue;
                            }
                            std::string str;
                            str += g[r1][c1];
                            str += g[r2][c2];
                            str += g[r3][c3];

                            ans = std::min(ans, str);
                        }
                    }
                }
            }
        }
    }
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}

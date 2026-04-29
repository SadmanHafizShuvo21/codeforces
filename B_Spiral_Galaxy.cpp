// 26 April 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 1e7 + 7;
const ll error = 1e-6;

void solve() {
    ll H, W;
    std::cin >> H >> W;

    std::vector<std::string> g(H);
    for (int i = 0; i < H; i++) {
        std::cin >> g[i];
    }

    ll ans = 0;
    for (int h1 = 0; h1 < H; h1++) {
        for (int h2 = h1; h2 < H; h2++) {
            for (int w1 = 0; w1 < W; w1++) {
                for (int w2 = w1; w2 < W; w2++) {

                    bool ok = true;
                    for (int i = h1; i <= h2 && ok; i++) {
                        for (int j = w1; j <= w2; j++) {
                            int i2 = h1 + h2 - i;
                            int j2 = w1 + w2 - j;

                            if (g[i][j] != g[i2][j2]) {
                                ok = false;
                                break;
                            }
                        }
                    }

                    ans += ok;
                }
            }
        }
    }
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    // int t;
    // std::cin >> t;
    // while (t--) {
    //     solve();
    // }
    solve();
}
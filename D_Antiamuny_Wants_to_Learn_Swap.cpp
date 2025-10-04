#include <bits/stdc++.h>
using ll = long long;

const int LOG = 20;
const int N = 500005;
int stMin[LOG][N], stMax[LOG][N], lg[N];

int getMin(int l, int r) {
    int k = lg[r - l + 1];
    return std::min(stMin[k][l], stMin[k][r - (1 << k) + 1]);
}

int getMax(int l, int r) {
    int k = lg[r - l + 1];
    return std::max(stMax[k][l], stMax[k][r - (1 << k) + 1]);
}

void solve() {
    int n, q;
    std::cin >> n >> q;
    for (int i = 1; i <= n; i++) {
        int x;
        std::cin >> x;
        stMin[0][i] = stMax[0][i] = x;
    }
    for (int k = 1; (1 << k) <= n; k++) {
        for (int i = 1; i + (1 << k) - 1 <= n; i++) {
            stMin[k][i] = std::min(stMin[k-1][i], stMin[k-1][i + (1 << (k-1))]);
            stMax[k][i] = std::max(stMax[k-1][i], stMax[k-1][i + (1 << (k-1))]);
        }
    }
    while (q--) {
        int l, r;
        std::cin >> l >> r;
        int mn = getMin(l, r);
        int mx = getMax(l, r);
        if (mx - mn + 1 == r - l + 1) std::cout << "NO\n";
        else std::cout << "YES\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    lg[1] = 0;
    for (int i = 2; i < N; i++) lg[i] = lg[i/2] + 1;
    int t;
    std::cin >> t;
    while (t--) solve();
}

#include <bits/stdc++.h>
using ll = long long;

int n;
std::string s[2];
std::vector<std::vector<int>> vis;

void dfs(int x, int y) {
    if (vis[x][y]) {
        return;
    }
    vis[x][y] = 1;
    int nx = 1 - x, ny = y;
    if (s[nx][ny] == '<') {
        ny--;
    }
    else {
        ny++;
    }
    if (0 <= ny && ny < n) {
        dfs(nx, ny);
    }

    for (int dy : {-1, 1}) {
        int nx = x, ny = y + dy;
        if (0 <= ny && ny < n) {
            if (s[nx][ny] == '<') {
                ny--;
            }
            else {
                ny++;
            }
            if (0 <= ny && ny < n) {
                dfs(nx, ny);
            }
        }
    }
}

void solve() {
    std::cin >> n;
    std::cin >> s[0] >> s[1];
    vis = std::vector<std::vector<int>>(2, std::vector<int>(n, 0));
    dfs(0, 0);
    std::cout << (vis[1][n - 1] ? "YES" : "NO") << "\n";
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

#include <bits/stdc++.h>
using ll = long long;
const ll MAX = 5000;

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    int total = 0;
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        total = gcd(total, a[i]);
    }

    int count = 0;
    for (int x : a) {
        if (x == total) {
            count++;
        }
    }

    if (count > 0) {
        std::cout << n - count << '\n';
        return;
    }

    std::vector<int> dist(MAX + 1, INT_MAX);
    std::queue<int> q;

    for (int x : a) {
        if (x <= MAX && dist[x] == INT_MAX) {
            dist[x] = 0;
            q.push(x);
        }
    }

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int x : a) {
            int v = gcd(u, x);
            if (v <= MAX && dist[v] == INT_MAX) {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }

    std::cout << dist[total] + n - 1 << '\n';
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

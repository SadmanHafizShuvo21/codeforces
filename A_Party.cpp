// #include <bits/stdc++.h>
// using ll = long long;

// const int N = 2005;
// std::vector<int> tree[N];
// ll depth[N];

// void dfs(int u, int d) {
//     depth[u] = d;
//     for (int v : tree[u]) {
//         dfs(v, d + 1);
//     }
// }

// void solve() {
//     int n;
//     std::cin >> n;

//     std::vector<int> roots;
//     for (int i = 1; i <= n; i++) {
//         int p;
//         std::cin >> p;
//         if (p != -1) {
//             tree[p].push_back(i);
//         } 
//         else {
//             roots.push_back(i);
//         }
//     }

//     for (int root : roots) {
//         dfs(root, 1);
//     }

//     ll ans = 0;
//     for (int i = 1; i <= n; i++) {
//         ans = std::max(ans, depth[i]);
//     }

//     std::cout << ans << '\n';
// }

// int main() {
//     std::ios::sync_with_stdio(false);
//     std::cin.tie(nullptr);

//     solve();
// }
#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;

    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ll cnt = 1, j = i;
        while (a[j] != -1) {
            j = a[j] - 1;
            cnt++;
        }
        ans = std::max(ans, cnt);
    }

    std::cout << ans << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}

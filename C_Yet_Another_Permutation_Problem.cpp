#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;

    std::vector<int> a;
    for (int i = 1; i <= n; i+=2) {
        for (int j = i; j <= n; j *=2) {
            a.push_back(j);
        }
    }

    for (int i = 0; i < n; i++) {
        std::cout << a[i] << " \n"[i==n-1];
    }
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
// #include <bits/stdc++.h>
// using ll = long long;

// void solve() {
//     int n;
//     std::cin >> n;
    
//     std::vector<bool> visited(n + 1, false);
//     std::vector<int> permutation;
    
//     for (int i = 1; i <= n; i++) {
//         if (!visited[i]) {
//             int current = i;
//             permutation.push_back(current);
//             visited[current] = true;
//             while (current * 2 <= n && !visited[current * 2]) {
//                 current *= 2;
//                 permutation.push_back(current);
//                 visited[current] = true;
//             }
//         }
//     }
    
//     for (int i = 0; i < n; i++) {
//         std::cout << permutation[i] << " \n"[i == n - 1];
//     }
// }

// int main() {
//     std::ios::sync_with_stdio(false);
//     std::cin.tie(nullptr);
    
//     int t;
//     std::cin >> t;
//     while (t--) {
//         solve();
//     }
// }

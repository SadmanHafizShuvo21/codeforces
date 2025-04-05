// #include <bits/stdc++.h>
// using ll = long long;

// void solve() {
//     int n;
//     std::cin >> n;

//     if (n % 2 == 0) {
//         std::cout << "-1\n";
//         return;
//     }

//     std::vector<int> p(n);
//     for (int i = 0; i < n; i++) {
//         p[i] = i + 1;
//     }
//     std::rotate(p.begin(), p.end() - 1, p.end());

//     for (int i = 0; i < n; ++i) {
//         std::cout << p[i] << " \n"[i == n - 1];
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
#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    
    std::vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        std::cin >> b[i];
    }
    
    std::vector<std::pair<int, int>> operations;
    bool possible = true;
    
    for (int i = 0; i < n; ++i) {
        if (a[i] == b[n-i-1]) continue;
        
        int idx_a = -1;
        for (int j = i + 1; j < n; ++j) {
            if (a[j] == b[n-i-1]) {
                idx_a = j;
                break;
            }
        }
        
        if (idx_a == -1) {
            possible = false;
            break;
        }
        
        operations.push_back({i + 1, idx_a + 1});
        std::swap(a[i], a[idx_a]);
        std::swap(b[i], b[idx_a]);
        
        if (a[i] == b[n-i-1]) continue;
        
        int idx_b = -1;
        for (int j = i + 1; j < n; ++j) {
            if (b[j] == b[n-i-1]) {
                idx_b = j;
                break;
            }
        }
        
        if (idx_b == -1) {
            possible = false;
            break;
        }
        
        operations.push_back({i + 1, idx_b + 1});
        std::swap(a[i], a[idx_b]);
        std::swap(b[i], b[idx_b]);
    }
    
    if (!possible) {
        std::cout << "-1\n";
    } else {
        std::cout << operations.size() << '\n';
        for (const auto& op : operations) {
            std::cout << op.first << " " << op.second << '\n';
        }
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

    return 0;
}

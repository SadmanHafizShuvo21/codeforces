#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    if (n <= 2) {
        for (int i = 1; i <= n; i++) {
            std::cout << i << " \n"[i == n];
        }
        return;
    }

    std::vector<int> p;
    if (n % 2 == 0) {
        p.push_back(1);
        p.push_back(n);
        for (int i = 2; i < n; i++) {
            p.push_back(i);
        }
    } 
    else {
        for (int i = 1; i <= n; i++) {
            if (i % 2 == 0 && i + 1 <= n) {
                p.push_back(i + 1);
                p.push_back(i);
                i++;
            } 
            else {
                p.push_back(i);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        std::cout << p[i] << " \n"[i == n - 1];
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

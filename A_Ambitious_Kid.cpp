#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    bool zero = false;
    int min_ops = INT_MAX;

    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        if (a[i] == 0) {
            zero = true;
        } 
        else {
            min_ops = std::min(min_ops, std::abs(a[i]));
        }
    }

    std::cout << (zero ? 0 : min_ops) << "\n";
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}

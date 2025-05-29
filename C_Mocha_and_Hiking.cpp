#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> a(n + 2, 0);
    for (int i = 1; i <= n; i++) {
        std::cin >> a[i];
    }

    a[n + 1] = 1;
    int x = 0;
    while (a[x] != 0 || a[x + 1] != 1) {
        x++;
    }
    
    std::vector<int> arr;
    for (int i = 1; i <= x; i++) {
        arr.push_back(i);
    }
    arr.push_back(n + 1);
    for (int i = x + 1; i <= n; i++) {
        arr.push_back(i);
    }
    
    for (int i = 0; i <= n; i++) {
        std::cout << arr[i] << " \n"[i == n];
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

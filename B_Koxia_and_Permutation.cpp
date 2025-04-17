#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n, k;
    std::cin >> n >> k;

    std::vector<int> a;
    ll l = 1, r = n;
    for (int i = 0; i < n; i++) {
        if (a.size() % 2 == 0) {
            a.push_back(r--);
        } 
        else {
            a.push_back(l++);
        }
    }

    for (int i = 0; i < n; i++) {
        std::cout << a[i] << " \n"[i == n - 1];
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

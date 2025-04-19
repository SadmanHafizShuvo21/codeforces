#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n, m;
    std::cin >> n >> m;

    std::vector<int> a(n);
    int ans = 0;

    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;

        int len = 0;
        while (x % 10 == 0) {
            len++;
            x /= 10;
        }
        a[i] = len;
        while (x > 0) {
            ans++;
            x /= 10;
        }
    }

    std::sort(a.begin(), a.end(), std::greater<>());
    for (int i = 1; i < n; i += 2) {
        ans += a[i];
    }

    if (ans >= m + 1) {
        std::cout << "Sasha\n";
    } 
    else {
        std::cout << "Anna\n";
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

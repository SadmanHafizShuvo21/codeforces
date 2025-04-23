#include <bits/stdc++.h>
using ll = long long;

std::vector<std::pair<int, int>> fact(int x) {
    std::vector<std::pair<int, int>> pr;
    for (int d = 2; d * d <= x; d++) {
        if (x % d == 0) {
            int cnt = 0;
            while (x % d == 0) {
                cnt++;
                x /= d;
            }
            pr.emplace_back(d, cnt);
        }
    }
    if (x > 1) {
        pr.emplace_back(x, 1);
    }
    return pr;
}

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    if (n == 1) {
        std::cout << "YES" << "\n";
        return;
    }

    std::map<int, int> prime_cnt;

    for (int num : a) {
        auto factors = fact(num);
        for (const auto &[p, cnt] : factors) {
            prime_cnt[p] += cnt;
        }
    }

    for (auto &[p, total] : prime_cnt) {
        if (total % n != 0) {
            std::cout << "NO" << "\n";
            return;
        }
    }

    std::cout << "YES" << "\n";
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

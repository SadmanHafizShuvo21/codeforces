#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n, k;
    std::cin >> n >> k;
    std::vector<int> a(n);
    std::map<int, int> freq;
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        freq[a[i]]++;
    }

    auto canDivide = [&](int x) {
        int seg = 0;
        for (int i = 0; i < n;) {
            std::vector<int> cnt(x, 0);
            int have = 0;
            int j = i;
            while (j < n) {
                if (a[j] < x && cnt[a[j]] == 0) {
                    cnt[a[j]] = 1;
                    have++;
                }
                j++;
                if (have == x) break;
            }
            if (have < x) break;
            seg++;
            i = j;
        }
        return seg >= k;
    };

    int l = 0, r = n + 1;
    while (l < r - 1) {
        int m = (l + r) / 2;
        if (canDivide(m)) l = m;
        else r = m;
    }

    std::cout << l << "\n";
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

#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int k, n;
    std::cin >> k >> n;

    std::vector<int> ans;
    int cur = 1, diff = 1;

    for (int i = 0; i < k; i++) {
        ans.push_back(cur);
        if ((n - (cur + diff)) >= (k - i - 2)) {
            cur += diff;
            diff++;
        } 
        else {
            cur++;
        }
    }

    for (int i = 0; i < k; i++) {
        std::cout << ans[i] << " \n"[i == k - 1];
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

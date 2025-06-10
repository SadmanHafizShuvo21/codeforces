#include <bits/stdc++.h>
using ll = long long;

std::vector<int> count_prime(int n) {
    std::vector<int> cnt(n + 1);
    for (int i = 2; i <= n; i++) {
        if (cnt[i] == 0) {
            for (int j = i; j <= n; j += i) {
                cnt[j]++;
            }
        }
    }
    return cnt;
}

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> cnt = count_prime(n);
    int ans = 0;
    for (int i = 6; i <= n; i++) {
        if (cnt[i] == 2) {
            ans++;
        }
    }
    std::cout << ans << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}

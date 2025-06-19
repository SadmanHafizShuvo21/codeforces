#include <bits/stdc++.h>
using ll = long long;

void solve() {
    std::string s, s1;
    std::cin >> s;

    ll n = s.size();
    for (int i = 0; i < n; i++) {
        int k = i;
        for (int j = i; j < n && j < i + 10; j++) {
            if (s[j] - j > s[k] - k) {
                k = j;
            }
        }
        while (k > i) {
            s[k]--;
            std::swap(s[k - 1], s[k]);
            k--;
        }
    }
    std::cout << s << "\n";
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

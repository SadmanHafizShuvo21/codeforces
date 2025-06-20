#include <bits/stdc++.h>
using ll = long long;

void solve() {
    std::string s, s1;
    std::cin >> s;

    ll n = s.size();
    for (int i = 0; i < n; i++) {
        for (int j = i; j > 0 && s[j] >= s[j - 1] + 2; j--) {
            s[j]--;
            std::swap(s[j - 1], s[j]);
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

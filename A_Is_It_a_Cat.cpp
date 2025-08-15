#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::string s, s1, s2 = "meow";
    std::cin >> n >> s;
    std::transform(s.begin(), s.end(), s.begin(), ::tolower);

    for (int i = 0; i < n; i++) {
        if (s[i] != s[i + 1]) {
            s1 += s[i];
        }
    }
    std::cout << (s1 == s2 ? "YES" : "NO") << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
}

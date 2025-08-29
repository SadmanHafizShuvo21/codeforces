#include <bits/stdc++.h>
using ll = long long;

void solve() {
    std::string s, p;
    std::cin >> s >> p;
    ll n = s.size(), m = p.size();

    std::vector<int> pi(m, 0);
    for (int i = 1, j = 0; i < m; i++) {
        while (j > 0 && p[i] != p[j]) {
            j = pi[j - 1];
        }
        if (p[i] == p[j]) {
            j++;
        }
        pi[i] = j;
    }

    ll cnt = 0;
    for (int i = 0, j = 0; i < n; i++) {
        while (j > 0 && s[i] != p[j]) {
            j = pi[j - 1];
        }
        if (s[i] == p[j]) {
            j++;
        }
        if (j == m) {
            cnt++;
            j = pi[j - 1];
        }
    }

    std::cout << cnt << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}

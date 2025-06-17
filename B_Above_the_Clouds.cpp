#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::string s;
    std::cin >> n >> s;

    std::vector<bool> ok1(26, false);
    ok1[s[0] - 'a'] = true;
    bool c1 = false;

    for (int i = 1; i < n - 1; i++) {
        if (ok1[s[i] - 'a']) {
            c1 = true;
            break;
        }
        ok1[s[i] - 'a'] = true;
    }

    std::vector<bool> ok2(26, false);
    bool c2 = false;

    for (int i = n - 1; i >= 2; i--) {
        ok2[s[i] - 'a'] = true;
        if (ok2[s[i - 1] - 'a']) {
            c2 = true;
            break;
        }
    }

    std::cout << (c1 || c2 ? "Yes\n" : "No\n");
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}

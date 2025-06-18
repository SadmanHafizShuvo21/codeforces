#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, k;
    std::cin >> n >> k;
    std::string s, res;
    std::cin >> s;

    ll R = k;
    for (int i = 0; i < n; i++) {
        bool last = (i == n - 1);
        char found = '?';
        for (char c = 'a'; c <= 'z'; c++) {
            int a_val = s[i] - 'a';
            int b_val = c - 'a';
            int diff = std::abs(a_val - b_val);
            int d = std::min(diff, 26 - diff);
            if (last) {
                if (d <= R && (R - d) % 2 == 0) {
                    found = c;
                    R -= d;
                    break;
                }
            } 
            else {
                if (d <= R) {
                    found = c;
                    R -= d;
                    break;
                }
            }
        }
        res += found;
    }
    std::cout << res << '\n';
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

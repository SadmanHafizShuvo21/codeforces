#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        ll k;
        std::cin >> n >> k;
        std::string s;
        std::cin >> s;

        for (int i = 0; i < n; ++i) {
            int dist = (s[i] - 'a');
            int wrap = 26 - dist;
            int cost = std::min(dist, wrap);

            if (k >= cost) {
                if (dist <= wrap) {
                    k -= dist;
                    s[i] = 'a';
                } else {
                    k -= wrap;
                    s[i] = 'a';
                }
            } else {
                // shift exactly k steps left from s[i]
                int new_char = (s[i] - 'a' - k + 26) % 26;
                s[i] = 'a' + new_char;
                k = 0;
                break;
            }
        }

        // if k > 0, shift last character
        if (k > 0) {
            int last = s.find_last_not_of('a');
            if (last != std::string::npos) {
                int new_char = (s[last] - 'a' - k + 26) % 26;
                s[last] = 'a' + new_char;
            }
        }

        std::cout << s << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}

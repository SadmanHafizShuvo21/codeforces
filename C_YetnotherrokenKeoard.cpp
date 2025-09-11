#include <bits/stdc++.h>
using ll = long long;
using lld = double;
using llx = __int128;

void solve() {
    std::string s, s1 = "";
    std::cin >> s;
    
    ll a = 0, b = 0;
    std::reverse(s.begin(), s.end());
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'B') {
            a++;
        }
        else if (s[i] == 'b') {
            b++;
        }
        else {
            if (islower(s[i])) {
                if (b > 0) {
                    b--;
                }
                else {
                    s1 += s[i];
                }
            }
            else {
                if (a > 0) {
                    a--;
                }
                else {
                    s1 += s[i];
                }
            }
        }
    }

    
    std::reverse(s1.begin(), s1.end());
    std::cout << s1 << "\n";
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
